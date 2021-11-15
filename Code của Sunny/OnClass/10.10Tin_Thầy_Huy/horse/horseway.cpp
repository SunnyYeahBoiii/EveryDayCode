// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Simple DP

for each m[]
	dp[i + m[j]] += dp[i] if (i + m[j] <= n)

Another Way To Do It:

for each m[]
	dp[i] += dp[i - m[j]] if(i - m[j] >= 0)

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "horseway"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n , m;
	cin >> n >> m;
	int a[m];
	for(int i = 0 ; i < m ; i++)
		cin >> a[i];

	int dp[n+1];
	memset(dp , 0 , sizeof(dp));
	dp[0] = 1;
	for(int i = 0 ; i <= n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(i + a[j] <= n)
				dp[i + a[j]] += dp[i];
		}
	}
	cout << dp[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
