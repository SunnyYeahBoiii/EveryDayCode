#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n , k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	
	auto test = [&](int tar){
		int count = 0;
		for(int i = 0 ; i < n ; i++)
			count += a[i] / tar;

		if(count >= k )
			return true;
		else return false;
	};	

	int left = 0 , right = 1e9 , mid , best = 0;
	while(left <= right){
		mid = (left + right) /2;
		if(test(mid)){
			best = max(best , mid);
			left = mid + 1;
		}else right = mid - 1;
	}

	cout << best << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("wires.inp" , "r" , stdin);
	freopen("wires.out" , "w" , stdout);
	solve();
	return 0;
}
