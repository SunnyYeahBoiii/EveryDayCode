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

vector<int> arr;

void gen(){
	arr.clear();
	int cur = 0;
	for(int i = 1 ; i <= 9 ; i++){
		cur = 0;
		for(int j = 1 ; j <= 4 ; j++){
			if(cur == 0)
				cur = i;
			else cur = cur * 10 + i;
			arr.push_back(cur);
		}
	}
}

void solve(){
	int n;
	cin >> n;
	int idx = lower_bound(arr.begin() , arr.end() , n) - arr.begin();
	int res = 0;

	auto sumC = [&](int a){
		int res = 0;
		while(a > 0){
			res += 1;
			a /= 10;
		}
		return res;
	};
	int i = 0;
	while(arr[i] != n){
		res += sumC(arr[i]);
		//cout << sumC(arr[i]) << endl;
		i++;
	}
	res += sumC(n);
	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
	gen();
        int t;
	cin >> t;
	while(t--)
		solve();
        return 0;
}        
