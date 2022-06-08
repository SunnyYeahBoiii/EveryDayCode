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

int n , k;

int dp[100005] , a[100005];

void solve(){
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++)    
        cin >> a[i];

    dp[0] = 0;
    for(int i(1) ; i < n ; i++){
        dp[i] = INF;
        for(int j(i-1) ; j >= max(0LL , i - k) ; j--){
            dp[i] = min(dp[i] , dp[j] + abs(a[i] - a[j]));
        }
    }

    cout << dp[n - 1] << endl;
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