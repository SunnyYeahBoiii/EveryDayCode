#include "bits/stdc++.h"

using namespace std;

#define v p.second

void solve(){
	int n , k;
	cin >> n >>k;
	map<int , vector<int>> vt;
	map<int , int> cnt;
	long long a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		cnt[a[i]]++;
		vt[a[i]].push_back(i+1);
	}

	for(auto p : vt){
		int u = p.first ;
		if(k != 0){
			if(cnt[u - k] > 0){
				cout << v[0] << " " << vt[u-k][0]<< endl;
			        return;	
			}
		}else if(k == 0){
			if(cnt[u-k] > 1){
				cout << v[0] << " " << v[1] << endl;
				return;
			}
		}
	}

	cout <<"0" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
