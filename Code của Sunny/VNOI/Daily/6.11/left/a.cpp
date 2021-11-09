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

int a[100005] , q[100005];
int n , m;

int bin_search(int tar){
	int l = 0 , r = n -1 , mid , best = -1;
	while(l <= r){
		mid = (l+r)/2;

		if(a[mid] <= tar){
			best = max(best , mid);
			l = mid + 1;
		}else r = mid - 1;
	}
	return best;
}

void solve(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	for(int i = 0 ; i < m ; i++)
		cin >> q[i];

	for(int i = 0 ; i < m ; i++){
		int k = bin_search(q[i]);
		cout << k + 1<< endl;
	}
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
