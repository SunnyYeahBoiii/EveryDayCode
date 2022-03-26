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
vector<int> a , dp;

void solve(){
    cin >> n;
    a.resize(n);dp.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    dp[0] = a[0];
    dp[1] = max(a[0] , a[1]);

    for(int i = 2 ; i < n ; i++)
        dp[i] = max(dp[i-1] , dp[i-2] + a[i]);

    cout << dp[n-1] << endl;
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