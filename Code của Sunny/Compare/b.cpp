// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/*
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int n , m , k , res = 0;
vector<int> a , b;
int board[15][15];

vector<bool> passed;

inline void place(int i , int j , int x , int y){
    for(int l = i ; l <= x ; l++)
        for(int r = j ; r <= y ; r++)
            board[l][r] = 1;
}

inline void un(int i , int j , int x,  int y){
    for(int l = i ; l <= x ; l++)
        for(int r = j ; r <= y ; r++)
            board[l][r] = 0;
}

inline bool placeables(int i , int j , int x,  int y){
    if(x >= n || y >= m)
        return false;

    for(int l = i ; l <= x ; l++)
        for(int r = j ; r <= y ; r++)
            if(board[l][r] == 1)
                return false;

    return true;
}

int dp[15][15];

inline bool allpassed(){
    for(int i = 0 ; i < k-1 ; i++)
        if(passed[i])
            return false;

    return true;
}

inline int test(){

    int r = 0;

    for(int i = 0 ; i < n ; i++)
        dp[i][0] = (board[i][0] == 1) ? 0 : 1;

    for(int j = 0 ; j < m ; j++)
        dp[0][j] = (board[0][j] == 1) ? 0 : 1;

    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(board[i][j] == 0)dp[i][j] = min(dp[i-1][j] , min(dp[i-1][j-1] , dp[i][j-1])) + 1;
            else dp[i][j] = 0;
            r = max(r , dp[i][j]);
        }
    }
    return r;
}

inline void xuli(){

    if(!allpassed())
        return;

    for(int i = 0 ; i < n ; i++)
        dp[i][0] = (board[i][0] == 1) ? 0 : 1;

    for(int j = 0 ; j < m ; j++)
        dp[0][j] = (board[0][j] == 1) ? 0 : 1;

    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(board[i][j] == 0)dp[i][j] = min(dp[i-1][j] , min(dp[i-1][j-1] , dp[i][j-1])) + 1;
            else dp[i][j] = 0;
            res = max(res , dp[i][j]);
        }
    }
}

inline void dq(int x , int y){

    if(x >= n){
        xuli();
        return;
    }

    if(test() < res)
        return;

    if(y >= m){
        dq(x + 1 , 0);
        return;
    }
    if(board[x][y] == 1){
        dq(x , y + 1);
            return;
    }
    for(int i = 0 ; i < k ; i++){
        if(i == k-1){
            dq(x , y+1);
            return;
        }
        if(passed[i] == false)
            continue;
        if(placeables(x , y , x + a[i] - 1 , y + b[i] - 1)){

            place(x , y , x + a[i] - 1 , y + b[i] -1);
            passed[i] = false;
            dq(x , y + 1);
            passed[i] = true;
            un(x , y , x + a[i] - 1 , y + b[i] - 1);

        }

        if(placeables(x , y , x + b[i] - 1, y + a[i] - 1)){

            place(x , y , x + b[i] - 1 , y + a[i] - 1);
            passed[i] = false;
            dq(x , y + 1);
            passed[i] = true;
            un(x , y , x + b[i] - 1 , y + a[i] - 1);

        }
    }
    return;
}

inline void solve(){
    cin >> n >> m >> k;
    a.resize(k);b.resize(k);
    for(int i = 0 ; i < k ; i++)
        cin >> a[i] >> b[i];
    k++;
    passed.resize(k+5 , true);
    a.push_back(0);
    b.push_back(0);
    dq(0 , 0);

    cout << res * res << endl;
}

int32_t main(){
	FileInput();
	//fast();
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;
}