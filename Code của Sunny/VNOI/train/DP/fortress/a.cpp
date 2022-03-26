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
int dp[20010] , a[20010];
void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n-1 ; i++)
        cin >> a[i];

    for(int i = 0 ; i < )

    for(int i = 0 ; i < n ; i++)
        dp[i] = INF;

    dp[0] = 0;
    dp[1] = a[0];
    if(3 == k)
        dp[2] = dp[1];
    else dp[2] = a[0] + a[1];
    if(k == 4)
        dp[3] = dp[2];
    else dp[3] = a[0] + a[2];

    for(int i = 4 ; i < n ; i++){
        if(i == k-1)
            dp[i] = dp[i-1];
        dp[i] = min(dp[i-2] + a[i-1] , min(dp[i-3] + a[i-1] + a[i-2] , dp[i-4] + a[i-1] + a[i-3]));
    }

    for(int i = 0 ; i < n ; i++)
        cout << dp[i] << " ";
    cout << endl;
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