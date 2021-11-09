#include "bits/stdc++.h"

using namespace std;

char dev[] = {'u' , 'e' , 'o' , 'a', 'i' , 'U' , 'E' , 'O' , 'A' , 'I'};

void solve(){
	string s;
	cin >> s;
	int n = s.size();
	bool changed = false;
	for(int i = 0 ; i < n ; i++){
		changed = false;
		for(int j = 0 ; j < 10 ; j++){
			if(s[i] == dev[j]){
				if(s[i] <= 'z' && s[i] >= 'a'){
					s[i] -= abs('A' - 'a');
					
				}
				changed = true;
				break;
			}
		}
		if(changed == true)
			continue;
		else{
			if(s[i] <= 'Z' && s[i] >= 'A')
				s[i] += abs('A' - 'a');		
		}
	}

	cout << s << endl;
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
