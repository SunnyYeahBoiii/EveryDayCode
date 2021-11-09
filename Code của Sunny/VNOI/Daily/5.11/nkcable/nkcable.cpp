// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

f[i] = max(f[i-1] , f[i-2] + a[i])

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "nkcable"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int f[25001] , a[25001];

void solve(){
	int n;
	cin >> n;
	for(int i = 2 ; i <= n ; i++)
		cin >> a[i];
	f[1] = 0;
	f[2] = a[2];
	f[3] = f[2] + a[3];
	for(int i = 4 ; i <= n ; i++)
		f[i] = min(f[i-1] , f[i-2]) + a[i];
	
	cout << f[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
