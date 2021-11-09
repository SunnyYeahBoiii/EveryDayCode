// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

k mod x = y

(k + y) % x == 0

k <= n



*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	int x , y , n;
	cin >> x >> y >> n;
	int res = (n/x)*x;

	if(res + y > n){
		cout << res - (x - y) << endl;
	}else cout << res + y << endl;	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        int t;
	cin >> t;
	while(t--)
		solve();
        return 0;
}        
