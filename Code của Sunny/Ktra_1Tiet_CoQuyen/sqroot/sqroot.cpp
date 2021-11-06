// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Category : Math

(n * (n+1) * (2*n+1)) / 6 

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "sqroot"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	n %= 2021;
	int mod = 2021*6;
	int res = (((n % mod)*((n+1) % mod) * ((2*n+1) % mod))/6)%2021;
	cout << res << endl;	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
