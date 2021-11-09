#include "bits/stdc++.h"
#include <iomanip>
using namespace std;

void solve(){
	int n;
	cin >> n;
	double a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);
	a[0] = 10.0;
	double res = 0;
	for(int i = 0 ; i < n ; i++)
		res += a[i];
	cout<< fixed << setprecision(1) << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}