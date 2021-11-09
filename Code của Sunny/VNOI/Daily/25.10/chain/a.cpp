#include "bits/stdc++.h"

using namespace std;

#define int long long

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];	

	sort(a , a+n);
	/*
	for(int i = 0 ; i < n ; i++)
		cout << a[i] << " ";
	cout << endl;
	*/
	int cur = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] + cur == n-i-1){
			cout << cur + a[i] << endl;
			return;
		}else if(a[i] + cur > n-i-1){
			cout << n-i-1;
			return;
			// a[i] - d ( chain-eyes that are needed )
			// d =  a[i] - (a[i] - (n - i -2))
			//something is wrong	
			// 5 - (5 - (10 - 5 - 1)) = 3
		}else cur += a[i];
	}
	cout << cur << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
