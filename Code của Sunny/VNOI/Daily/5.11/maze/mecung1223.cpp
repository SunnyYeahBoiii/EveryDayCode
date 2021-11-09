// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

f[i] = f[i-1] + f[i-2] + f[i-3];

n - f[n]

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "mecung1223"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int m , n;
	cin >> m >> n;
	int f[n+1];
	f[1] = 1;
	f[2] = 2;
	f[3] = 4;
	for(int i = 4 ;i <= n ; i++){
		f[i] = f[i-1] + f[i-2] + f[i-3];
	}
	if(f[n] < m)cout << m - f[n] << endl;
	else cout << "0" << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
