#include "bits/stdc++.h"

using namespace std;

int trans(long long a){
	int rev = 0;
	while(a > 0){
		rev += a%10;
		a /= 10;
	}

	return rev;
}

void solve(){
	long long a;
	cin >> a;

	while(a > 9){
		a = trans(a);
	}

	cout << a << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}