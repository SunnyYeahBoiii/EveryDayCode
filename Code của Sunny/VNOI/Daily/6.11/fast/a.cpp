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
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);

	auto lefts = [&](int tar){
		int l = 0 , r = n-1 , mid , best = INF;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] >= tar){
				best = min(mid , best);
				r = mid - 1;
			}else l = mid + 1;
		}
		return best;
	};

	auto rights = [&](int tar){
		int l = 0 , r = n-1 , mid , best = -1;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] <= tar){
				best = max(best , mid);
				l = mid + 1;
			}else r = mid - 1;
		}
		return best;
	};

	int q , l , r;
	cin >>q;
	for(int i = 0 ; i < q ; i++){
		cin >> l >> r;
		int il = lefts(l) , ir = rights(r);
		if(il > ir)
			cout << "0" << endl;
		else cout << ir-il+1 << " ";
	}	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
