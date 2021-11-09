// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	int n;
	vector<int> past;
	past.clear();
	cin >> n;
	past.push_back(n);
	int cnt = 0;
	while(n > 1){
		while(n % 6 == 0){
			n /= 6;
			cnt++;
			if(binary_search(past.begin() , past.end() , n)){
				cout << "-1" << endl;
				return;
			}
			past.push_back(n);
		}
		if(n == 1)
			break;
		while(n % 6 != 0){
			n *= 2;
			cnt++;
			if(binary_search(past.begin() , past.end() , n)
			   || n > 10000000000000000){
				cout << "-1" << endl;
				return;
			}
			past.push_back(n);
		}
	}

	cout << cnt << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        int t;
	cin >> t;
	while(t--)
		solve();
        return 0;
}        
