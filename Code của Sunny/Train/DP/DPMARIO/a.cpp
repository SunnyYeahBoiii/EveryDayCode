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
int dp[10005] , a[10005];

const int MOD = 1000000000;

void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    a[n] = 0;
    if(a[0] == 2)
        dp[0] = 0;
    else dp[0] = 1;

    if(a[1] == 2)
        dp[1] = 0;
    else if(a[1] == 1)
        dp[1] = dp[0] % MOD;
    else dp[1] = (dp[0] + 1) % MOD;

    if(a[2] == 2)
        dp[2] = 0;
    else if(a[2] == 1)
        dp[2] = dp[1] % MOD;
    else dp[2] = (dp[1] + dp[0] + 1) % MOD;

    for(int i = 3 ; i <= n ; i++){
        if(a[i] == 2){
            dp[i] = 0;
            continue;
        }else if(a[i] == 1){
            dp[i] = dp[i-1] % MOD;
        }else{
            dp[i] = (dp[i-1] + dp[i-2]) % MOD;
            if(a[i-3] != 1)
                dp[i] = (dp[i] + dp[i-3]) % MOD;
        }
    }

    for(int i = 0 ; i < n ; i++)
        cout << dp[i] << " ";
    cout << endl;
    cout << dp[n] << endl;
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