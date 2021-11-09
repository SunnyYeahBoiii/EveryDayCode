// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n , m;
	cin >> n >> m;
	int a[n] , q[m];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);
	for(int i = 0 ;  i < m ; i++)
		cin >> q[i];

	for(int i = 0 ; i < m ; i++)
		if(binary_search(a , a+n , q[i]))
			cout << "YES" << endl;
		else cout << "NO" << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
