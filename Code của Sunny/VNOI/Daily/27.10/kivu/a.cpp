#include "bits/stdc++.h"

using namespace std;

void solve(){
	int n, m , k;
	cin >> n >> m;
	vector<int> a(n) , b(m);
	for(int i = 0 ; i < n; i++)
		cin >> a[i];
	for(int i = 0 ; i < m ; i++)
		cin >> b[i];
	
	auto bin = [&](int tar){
		int l = 0 , r = n-1 , mid , best = 1 << 30;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] <= tar)
				l = m+1;
			else if(a[mid] >= tar){
				r = m-1;
				best = min(best , mid);
			}
		}
		cout << best << endl;
		if(best != 1 << 30){
			//a.erase(a.begin() + best);
			return best;
		}
		else return -1;

	};

	sort(a.begin() , a.end());
	int res = 0;
	for(int i = 0 ; i < m ; i++){
		int temp = bin(b[i]);
		if(temp != -1)
			++res;
	}

	cout << res << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
