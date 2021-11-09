// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

dp[i][j] means the best way the chose the array ends with a[i] and b[j]

if(a[i] == b[j])dp[i][j] = dp[i-2][j-2] + 1;
else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n,m;
	cin >> n >> m;
	int a[n+2] , b[m+2];
	for(int i = 2 ; i <= n+1 ; i++)
		cin >> a[i];
	for(int j = 2 ; j <= m+1 ; j++)
		cin >> b[j];

	int dp[n+2][m+2] , pref[n+2][m+2];
	memset(dp , 0 , sizeof(dp));
	

	for(int i = 2 ; i <= n+1 ; i++){
		for(int j = 2 ; j <= m+1 ; j++){
			dp[i][j] =max(dp[i-1][j] , dp[i][j-1]);
			if(a[i] == b[j])
				dp[i][j] = max(dp[i][j] , dp[i-2][j-2] + 1);
		}
	}
	
/*	
	cout << "a :";
	for(int i = 1 ; i <= n ; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "b :";
	for(int i = 1 ; i <= m ; i++)
		cout << b[i] << " ";
	cout << endl;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cout << pref[i][j] << " ";
		}
		cout << endl;
	}
*/	
	cout << dp[n+1][m+1] << endl;

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
