#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}

	int res = 0;
	sort(a , a+n);
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			int t = lower_bound(a+j+1 , a+n , a[i] + a[j]) - a;
			res += (t - j - 1); // số lượng 
		}
	}


	cout <<res << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}