// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Simple DP 

dp[i][j] is best way to go to floor i des j

dp[i][j] = max(dp[i-1][j-1] , dp[i-1][j]) + a[i][j];

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int a[n+1][n+1];

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= i ; j++){
			cin >> a[i][j];
		}
	}

	int dp[n+1][n+1];
	dp[1][1] = a[1][1];
	for(int i = 2 ; i <= n ; i++)
		dp[i][1] = dp[i-1][1] + a[i][1];

	for(int i = 2 ; i <= n ; i++)
		dp[i][i] = dp[i-1][i-1] + a[i][i];

	for(int i = 3 ; i <= n ; i++){
		for(int j = 2 ; j < i ; j++)
			dp[i][j] = max(dp[i-1][j-1] , dp[i-1][j]) + a[i][j];

	}

	int res = 0;
	for(int i = 1 ; i <= n ; i++){
		res = max(res , dp[n][i]);
	}

	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
