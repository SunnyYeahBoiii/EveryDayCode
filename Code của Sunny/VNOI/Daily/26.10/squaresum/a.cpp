#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	long long res = 0;	
	if(n % 2 == 0){
		res += n*(long long)n;
		n -= 1;
	}
	int back = n;
	n = n/2;
	res -= (back + 1) * n;
	if(back % 2==1)
		res -= (back+1)/2;
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
