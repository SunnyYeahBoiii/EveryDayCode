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


void solve(){

    int n;
    cin >> n;
    vector<int> a(n+1);

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = a[1];
    dp[2] = max(a[1] , a[2]);
    for(int i = 3 ; i <= n ; i++)
        dp[i] = max(dp[i-1] , dp[i-2] + a[i]);

    cout << dp[n] << endl;
}

int32_t main(){
	//FileInput();
	fast();     
	
	int t;
    cin >> t;
    while(t--)
	
	solve();
	return 0;	
}