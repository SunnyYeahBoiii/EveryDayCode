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

const int MOD = 1000000000 + 7;

void solve(){

    int n;
    cin >> n;

    vector<int> dp(1000001);
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3 ; i <= n ; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;

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