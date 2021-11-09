#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);
	long long pref[n];
	pref[0] = a[0];
	long long res = 0;
	for(int i = 1 ; i < n ; i++){
		res += a[i]*i - pref[i-1];
		pref[i] = pref[i-1] + a[i];
	}

	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
