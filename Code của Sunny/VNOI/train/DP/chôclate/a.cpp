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

const int MOD = 1000000007;

int dp[100005];

void solve(){
    int n;
    cin >> n;
    int a[] = {1 , 2 , 3};
    dp[0] = 1;
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i <= n ; i++){
            if(i - a[j] >= 0)
                dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
        }
    }

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