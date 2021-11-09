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
	int n , k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	int res = 0 , cur = 0;
	sort(a.begin() , a.end());
	for(int i = 0 ; i < n ; i++){
		if(a[i] % k == 0)
			continue;
		else{
			int add = (a[i]+cur) % k;
			add = k - add;
			res += add+1;
			cur += add+1;
		}
	}

	cout <<res<< endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
