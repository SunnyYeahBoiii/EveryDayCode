// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Sortings

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "ptk"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int f[10000005];

void solve(){
	int n , m , k;
	cin >> n >> m >> k;
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i < n ; i++)
		f[i] = ((f[i-1] % m) + (f[i-2] % m)) % m;

	sort(f , f+n);
	cout << f[k-1] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
