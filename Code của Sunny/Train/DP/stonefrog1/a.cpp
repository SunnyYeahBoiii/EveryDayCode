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
int dp[100005] , a[100005];

void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    dp[0] = 0;
    dp[1] = abs(a[0] - a[1]);
    
    for(int i = 2 ; i < n ; i++)
        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]) , dp[i-2] + abs(a[i] - a[i-2]));

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