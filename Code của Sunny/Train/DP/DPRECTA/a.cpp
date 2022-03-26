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
int dp[2][10005];
int a[10005] , b[10005];

void solve(){
    cin >> n;

    for(int i = 0 ; i < n; i++)
        cin >> a[i] >> b[i];

    dp[0][0] = b[0];
    dp[1][0] = a[0];

    for(int i = 1 ; i < n; i++){
        // dp[0][i]

        dp[0][i] = max(dp[0][i-1] + abs(a[i] - a[i-1]) + b[i] , dp[1][i-1] + abs(a[i] - b[i-1]) + b[i]);
        dp[1][i] = max(dp[0][i-1] + abs(b[i] - a[i-1]) + a[i], dp[1][i-1] + abs(b[i] - b[i-1]) + a[i]);

    }

    cout << endl;
    for(int i = 0 ; i < n ; i++)
        cout << dp[0][i] + a[i]  << " " << dp[1][i] + b[i] << endl;
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