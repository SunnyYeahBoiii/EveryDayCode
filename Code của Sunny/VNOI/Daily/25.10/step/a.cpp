#include "bits/stdc++.h"

using namespace std;

void solve(){
	long long n;	
	cin >> n;
	long long res = 0;
	res += n/5;
	n %= 5;
	if(n > 0)
		res++;
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}