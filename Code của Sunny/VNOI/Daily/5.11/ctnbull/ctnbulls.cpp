// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

dp

if(i >= k)
	dp[i] = dp[i-1] + dp[i-k] + 1;
else dp[i] = dp[i-1] + 1;

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "ctnbulls"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

const int MOD = 2111992;

int dp[100005];

void solve(){
	int n , k;
	cin >> n >> k;
	dp[1] = 2;
	dp[0] = 1;
	for(int i = 2 ; i <= n ; i++)
		if(i > k)
			dp[i] = ((dp[i-1] % MOD) + (dp[i-k-1]% MOD)) % MOD;
		else dp[i]= (dp[i-1] + 1) % MOD;
	cout << dp[n] << endl;	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
