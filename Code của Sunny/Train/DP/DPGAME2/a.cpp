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

    int n , k;
    cin >> n >> k;
    vector<int> a(n+1);
    vector<int> dp(n+1 , 0);

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    dp[0] = 0;

    for(int i = 1 ; i <= n ; i++){
        dp[i] = -INF;  
        for(int j = max(0LL , i - k) ; j < i ; j++)
            dp[i] = max(dp[i] , dp[j] + a[i]);
    }
    cout << *max_element(dp.begin() , dp.end()) << endl;
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