#include "bits/stdc++.h"

using namespace std;

void solve(){
	string s;
	cin >> s;
	s = '$' + s;
	map<char , bool> left , right;
	for(int i = 1 ; i < s.size() ; i++){
		if(i <= s.size()/2){
			left[s[i]] = true;
		}else{
			right[s[i]] = true;;
		}
	}	

	for(auto p : left){
		char a = p.first;
		bool b = p.second;
		if(b == true){
			if(right[a] == false){
				cout << "NO" << endl;
				return;
			}
		}else if(b == false){
			if(right[a] == true){
				cout << "NO" << endl;
				return;
			}
		}
	}

	cout << "YES" << endl;
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
