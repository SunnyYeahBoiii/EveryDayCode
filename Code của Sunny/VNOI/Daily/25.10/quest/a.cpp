#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	string res = "";
	while(n > 9){
		res += '9';
		n -= 9;
	}
	if(n > 0){
		res += n + '0';
	}

	reverse(res.begin() , res.end());

	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}