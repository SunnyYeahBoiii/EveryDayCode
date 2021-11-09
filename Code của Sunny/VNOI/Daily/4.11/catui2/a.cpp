// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Knapsnack normal dp then trace 

dp[i][j] means the best value can chose to fit in weight j from i first package and 

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n , m;
	cin >> n >> m;
	int c[n] , g[n];
	for(int i = 1 ; i <= n ; i++)
		cin >> c[i] >> g[i];
	int dp[n+5][m+5];
	memset(dp , 0 , sizeof(dp));

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			dp[i][j] = dp[i-1][j];
			if(c[i] <= j)
				dp[i][j] = max(dp[i][j] , dp[i-1][j - c[i]] + g[i]);
		}
	}	
	
	vector<int> path;

	int i = n , j = m;
	while(i > 0 && j > 0){
		//cout << i << " " << j << endl;
		if(dp[i][j] == dp[i-1][j])
			i -= 1;
		else {
			path.push_back(i);
			j -= c[i];
			i--;
		}
	}
/*
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cout << dp[i][j] << "   ";
		}
		cout << endl;
	}

	cout << "res" << endl;
*/
	cout << dp[n][m] << endl;
	for(int i = 0 ; i < path.size() ; i++)
		cout << path[i] << " ";
	cout << endl;
}

int32_t main(){
        //ios_base::sync_with_stdio(false);
        //cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
