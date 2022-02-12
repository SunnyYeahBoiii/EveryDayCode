// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "hvcon"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int prefix[1005][1005];

int board[1005][1005];

void solve(){

    int n , k;
    cin >> n >> k;

    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++){
            cin >> board[i][j];
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + board[i][j];
        }

    int res = 0;

    for(int i = 1 ; i + k - 1<= n ; i++){
        for(int j = 1 ; j + k - 1 <= n; j++){
            int x = i + k - 1 , y = j + k - 1;

            int test = prefix[x][y] - prefix[x][j-1] - prefix[i-1][y] + prefix[i-1][j-1];

            res = max(res , test);
        }
    }

    cout << res << endl;
}

int32_t main(){
	FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}