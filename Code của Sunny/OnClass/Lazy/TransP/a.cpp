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
#define INF 1000000000

int n , m;
int dp[105][105]{INF} , a[105][105] , minn[105][105];
pair<int , int> previ[105][105];
// dp[i][j] giá trị tốt nhất khi xét tới nhà thứ i nhà gửi k món hàng trong j

void solve(){
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
        for(int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }

    for(int i = 0 ; i <= m ; i++)
        for(int j = 0 ; j <= n ; j++)
            dp[i][j] = INF;

    for(int i = 1 ; i <= n ; i++)
        minn[i][0] = 0;

    for(int j = 1 ; j <= n ; j++){
        for(int i = 1 ; i <= m ; i++){
            for(int k = 1 ; k <= j ; k++){
                if(minn[i][j - k] + a[i][k] < dp[i][j]){
                    dp[i][j] = minn[i][j-k] + a[i][k];
                    previ[i][j] = {j , k};
                }
            }
        }

        for(int i = 1 ; i <= m ; i++){
            minn[i][j] = INF;
            for(int k = 1 ; k < i ; k++)
                minn[i][j] = min(minn[i][j] , dp[k][j]);
            for(int k = i+1 ; k <= m ; k++)
                minn[i][j] = min(minn[i][j] , dp[k][j]);
        }
    }

    int res = INF;
    for(int i = 1 ; i <= m ; i++)
        res = min(res , dp[i][n]);
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
