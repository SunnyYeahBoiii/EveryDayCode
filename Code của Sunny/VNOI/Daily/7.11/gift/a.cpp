// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
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
	vector<int> a(n);
	for(auto &x : a)
		cin >> x; 	

	int dp[4][n+1];
	if(n <= 3){
		int sum = 0;
		for(int i = 0 ; i < n ; i++)
			sum += a[i];
		cout << sum << endl;
		return;
	}
	dp[1][0] = dp[2][0] = dp[3][0] = a[0];
	dp[1][1] = a[0];
	dp[2][1] = dp[3][1] = a[1] + a[0]; 
	dp[1][2] =dp[1][0] + a[2];
	
	for(int i = 4 ; i < n ; i++){
		dp[i] = dp[i-1];
		dp[i] = max(dp[i-2] + a[i] , dp[i]);
		dp[i] = max(dp[i-4] + a[i] + a[i-1] , dp[i]);
		if(i >= 6)
			dp[i] = max(dp[i-6] + a[i] + a[i-1] + a[i-2] , dp[i]);
	}
	for(int i = 0 ; i < n ; i++)
		cout << dp[i] << " ";
	//cout << dp[n-1]<< endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
