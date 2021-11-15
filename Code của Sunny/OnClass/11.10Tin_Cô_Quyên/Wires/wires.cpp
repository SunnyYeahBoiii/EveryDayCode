#include "bits/stdc++.h"

using namespace std;

#define int unsigned long long

void solve(){
	int n , l;
	cin >> n >> l;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>> a[i];
	}

	// Count How Many Segment Can Be Cut
	auto test = [&](int tar){
		int count = 0;
		for(int i = 0 ; i < n ; i++){
			count += a[i] / tar;
		}

		if(count >= l)
			return true;
		else return false;
	};
	
	// Using Binary Thing For The Result
	int left = 1 , right = 1e9 , mid , best = 0;
	while(left <= right){
		mid = (left + right) /2;
		if(test(mid)){
			best = max(mid , best);
			left = mid+1;
		}else right = mid - 1;
	}

	cout << best << endl;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("wires.inp" , "r" , stdin);
	freopen("wires.out" , "w" , stdout);
	solve();
	return 0;
}
