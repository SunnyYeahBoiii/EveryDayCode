#include "bits/stdc++.h"

using namespace std;

void solve(){
	string a;
	map<char , int> cnt;
	cin >> a;
	int n = a.size();
	for(int i = 0 ; i < n ; i++){
		cnt[a[i]]++;
	}

	for(auto p : cnt){
		int d = p.second;
		if(d % 2 == 1){
			cout << "No" << endl;
			return;
		}
	}

	cout << "Yes" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}