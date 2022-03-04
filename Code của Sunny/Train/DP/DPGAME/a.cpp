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

const int MOD = 25071987;

void solve(){

    int n , k;
    cin >> n >> k;

    vector<int> dp(n+5);
    map<int , bool> m;
    int a;

    for(int i = 0 ; i < k ; i++){
        cin >> a;
        m[a] = true;
    }

    int cur = 0;

    dp[1] = 1;
    if(m[2] == true){
        dp[2] = 0;
        cur++;
    }
    else dp[2] = 1;

    for(int i = 3 ; i <= n ; i++){
        if(m[i] == true){
            dp[i] = 0;
            cur++;
        }else dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
    
    //for(int i = 1 ; i <= n ; i++)
    //    cout << dp[i] << " ";
    //cout << endl;
    
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