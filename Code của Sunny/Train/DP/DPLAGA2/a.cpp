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
vector<int> dp[3];

void solve(){

    int n;
    cin >> n;

    dp[1].resize(n+5);
    dp[2].resize(n+5);

    dp[1][1] = 1;
    dp[1][2] = 1;

    for(int i = 2 ; i <= n ; i++){
        dp[i][1] = 1;
        for(int j = 1 ; j < i - 1 ; j++){
            dp[i][1] += dp[j][1];
            dp[i][1] += dp[j][2];
        }
        dp[i][1] += dp[i-1][2];

        dp[i][2] = 1;
        for(int j = 1 ; j < i - 1 ; j++){
            dp[i][2] += dp[j][1];
            dp[i][2] += dp[j][2];
        }
        dp[i][2] += dp[i-1][1];
        cout << dp[i][1] << " " << dp[i][2] << endl;
    }

    cout << dp[n][1] + dp[n][2] + 1;

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