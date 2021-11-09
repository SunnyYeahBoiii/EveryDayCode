#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n , x ,y;
	cin >> n >> x >> y;
	int d[n];
	for(int i = 0 ; i < n ; i++)
		cin >> d[i];

	if(x <= y){
		int res = (upper_bound(d , d+n , x) - d);
		if(d[res] <= x)
			res++;
		else res--;
		int i = 0;
		int minus =
			i++; 0;
		while(d[i] == 0){
			minus++;
		}
		cout << ((res-minus)/2)+((res-minus) % 2) << endl;
	}else{
		cout << n << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
