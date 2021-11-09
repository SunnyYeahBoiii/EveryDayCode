#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	int n , m;
	cin >> m >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	auto test = [&](int tar){
		cout << tar << endl;
		int cur = 0;
		for(int i = 0 ; i < n ; i++){
			if(i < tar){
				cur += a[i];
				continue;
			}

			cur -= a[i-tar];
			cur += a[i];
			//cout << i << " " << cur << endl;
			if(m > cur){
				return false;
			}
		}

		return true;
	};

	int l = 1 , r = n , mid , best = n;
	while(l <= r){
		mid = (l+r)/2;
		if(test(mid)){
			r = mid - 1;
			best = min(best , mid);
		}else l = mid + 1;
	}

	cout << best << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}            
