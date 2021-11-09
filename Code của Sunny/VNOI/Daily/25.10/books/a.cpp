#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n, greater<int>());
	long long res = 0;
	for(int i = 0 ; i < n ; i++){
		if((i+1) % 3 == 0)
			continue;
		else res += a[i];
	}

	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}