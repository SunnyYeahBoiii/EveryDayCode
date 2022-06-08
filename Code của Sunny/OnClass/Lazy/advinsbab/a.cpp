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
#define INF 10000000000000000

int n;
vector<int> a , dp;

void solve(){
    cin >> n;
    a.resize(n+5 , -INF);dp.resize(n+5 , -INF);

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    dp[1] = a[1];
    dp[2] = max(a[2] + a[1] , a[2]);
    dp[3] = max({a[3] + a[1] , a[3] + a[2] , a[3]});

    // i i-1 i-2 i-3 i-4 i-5

    for(int i = 4 ; i <= n ; i++){
        dp[i] = max({dp[i-2] + a[i] , dp[i-3] + a[i] + a[i-1] , dp[i-3] + a[i]});
        if(i > 4)
            dp[i] = max({dp[i] , dp[i-4] + a[i] + a[i-2] , dp[i-4] + a[i] + a[i-1]});
        if(i > 5)
            dp[i] = max(dp[i] , dp[i-5] + a[i] + a[i-2]);
    }

    if(n == 1)
        cout << dp[n] << endl;
    else if(n == 2)
        cout << max(dp[n] , dp[n-1]) << endl;
    else 
        cout << max({dp[n] , dp[n-1] , dp[n-2]}) << endl;;
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