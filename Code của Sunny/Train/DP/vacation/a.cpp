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

int n;
int a[100005] , b[100005] , c[100005];
int dp[3][100005];

void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i] >> b[i] >> c[i];

    dp[0][0] = a[0];
    dp[1][0] = b[0];
    dp[2][0] = c[0];

    for(int i = 0 ; i < n ; i++){
        dp[0][i] = max(dp[1][i-1] , dp[2][i-1]) + a[i];
        dp[1][i] = max(dp[0][i-1] , dp[2][i-1]) + b[i];
        dp[2][i] = max(dp[1][i-1] , dp[0][i-1]) + c[i];
    }

    cout << max({dp[0][n-1] , dp[1][n-1] , dp[2][n-1]}) << endl;
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