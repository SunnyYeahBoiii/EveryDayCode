#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdsabest"
#define FileInput() freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);
#define int long long
#define endl "\n"

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	int dp[n+1] , curH[n+1];
	dp[0] = (a[0] >= 0) ? 1: 0;
	if(dp[0] == 1)
		curH[0] = a[0];
	else curH[0] = 0;
	for(int i = 1 ; i < n ;i++){
		dp[i]=  dp[i-1];
		curH[i] = curH[i-1];
		int BestV = 0 , UpH = 0;
		for(int j = 0 ; j < i ; j++){
			if(dp[j] + 1 >= dp[i] && curH[j] + a[i] >= 0){
				if(dp[i] == dp[j]+1)
					curH[i] = max(curH[i] , curH[j] - a[i]);
				dp[i] = dp[j] + 1;
					curH[i] = curH[j] + a[i];
			}
		}
	}

	cout << dp[n-1] << endl;
	for(int i = 0 ; i < n ; i++)
		cout << dp[i] << " ";
	cout << endl;
	for(int i = 0 ; i < n ; i++)
		cout << curH[i] << " ";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//FileInput();
	solve();
	return 0;
}
