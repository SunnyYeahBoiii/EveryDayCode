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
	int a[n+1] , q[m];
	
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	a[n] = 1e18;
	for(int i = 0 ; i < m ; i++)
		cin >> q[i];

	auto bin_search = [&](int tar){
		int l = 0 , r = n , mid, best = INF;
		while(l <= r){
			mid = (l+r)/2;
			//cout << mid << endl;
			if(a[mid] >= tar){
				best = min(best , mid);
				r = mid - 1;
			}else l = mid + 1;
		}

		return best;
	};
		
	for(int i = 0 ; i < m ; i++){
		int k = bin_search(q[i]);
		if(k == INF)
			cout << "0" << endl;
		else cout << k+1 << endl;
	}

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
