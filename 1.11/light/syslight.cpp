// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Simple DP

dp[i] = dp[i-2] + dp[i-1]

I'm not really sure about this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "syslight"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int dp[n+2];
	dp[1] = 1;
	dp[2] = 1;
	for(int i = 3 ; i <= n ; i++)
		dp[i] = dp[i-2] + dp[i-1];

	cout << dp[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
