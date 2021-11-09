#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
	int n , k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	sort(a.begin() , a.end());
	int cur , res = 0;

	auto bin_search = [&](int tar){
		int l = 0 , r = a.size()-1 , mid , best = -1;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] <= tar){
				best = max(best , mid);
				l = mid+1;
			}else r = mid-1;
		}
		return best;
	};

	while(!a.empty()){
		cur = a[a.size()-1];
		res += cur;
		a.erase(a.end()-1);
		while(true && !a.empty()){
			//cout << cur-1 << " idx = " <<*idx << endl;
			int idx = bin_search(cur-k);
			if(idx == -1){
				break;
			}
			cur = a[idx];
			a.erase(a.begin() + idx);	
		}
	}	

	cout << res << endl;
}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
