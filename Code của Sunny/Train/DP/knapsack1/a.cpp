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

int n , w;
int a[100005] , b[100005];

int dp[105][100005];

void solve(){
    cin >> n >> w;

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i] >> b[i];

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= w ; j++){
            dp[i][j] = dp[i-1][j];
            if(j - a[i] >= 0)
                dp[i][j] = max(dp[i][j] , dp[i-1][j-a[i]] + b[i]);
        }
    }

    cout << dp[n][w] << endl;
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