// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "vsteps"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

const int MOD = 14062008;
int f[100005];
int a[100005];
void solve(){
	int n , k , a0;
	cin >> n >> k;
	for(int i = 0 ; i <= n ; i++)
		a[i] = 1;
	for(int i = 0 ; i < k ; i++){
		cin >> a0;
		a[a0] = 0;
	}

	f[0] = 1;
	f[1] = 1 * a[1];
	f[2] = 1 * a[2];
	for(int i = 3 ; i <= n ; i++)
		f[i] = ((f[i-1] + f[i-2]) % MOD) * a[i];

	cout << f[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
