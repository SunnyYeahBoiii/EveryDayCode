// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Type 1: 1*2
Typ2 2: 2*2

dp[i] = dp[i-2] * 2 + dp[i-1]

Explaination:

Sum Of Ways To Fit In:
	+) 2*2
	+) 1*2 but two
	+) 1*2 (only one)

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "DeBorder"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int dp[21];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 3;
	for(int i = 3 ; i < 21 ; i++)
		dp[i] = dp[i-2]*2 + dp[i-1];
	
	int n;
	while(cin >> n)
		cout << dp[n] << endl;
}

int32_t main(){
        //ios_base::sync_with_stdio(false);
        //cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
