#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n , devs;
	cin >> n >> devs;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n , greater<int>());

	int res = 1 , cnt = 0;

	for(int i = 0 ; i < n && res < devs ;i++){
		if(a[i] - 1 < 0){
			cout << "-1" <<endl;
			return;
		}
		res += a[i]-1;
		cnt++;
	}

	if(res >= devs)cout << cnt << endl;
	else cout << "-1" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}