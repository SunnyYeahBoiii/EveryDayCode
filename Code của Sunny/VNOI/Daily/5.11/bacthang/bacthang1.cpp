// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

f[i] = f[i-1] + f[i-2]

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bacthang1"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int f[n];
	f[1] = 1;
	f[2] = 1;
	for(int i = 3 ; i <= n ; i++)
		f[i] = f[i-1] + f[i-2];

	cout << f[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
