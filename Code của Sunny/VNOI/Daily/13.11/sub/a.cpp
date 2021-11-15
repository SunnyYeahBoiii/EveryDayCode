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
#define INF 1 << 30

void solve(){
	int n , m , p;
	cin >> n >> m >> p;
	vector<int> a(n) ,b(m) , c(p);
	for(auto &x : a)
		cin >> x;

	for(auto &x : b)
		cin >> x;

	for(auto &x : c)
		cin >> x;

	sort(a.begin() , a.end());
	sort(b.begin() , b.end());

	auto b_search = [&](int tar){
		int l = 0 , r = m-1 , mid;
		while(l <= r){
			mid = (l+r)/2;
			if(b[mid] < tar)
				l = mid + 1;
			else if(b[mid] > tar)
				r = mid - 1;
			else return mid;
		}
		return (int)-1;
	};
	
	auto a_search = [&](int tar){
		int l = 0 , r = a.size()-1 , mid;
		while(l <= r){
			mid = (l + r)/2;
			if(a[mid] < tar)
				l = mid + 1;
			else if(a[mid] > tar)
				r = mid - 1;
			else return mid;
		}
		return (int)-1;
	};
	int res = 0;
	for(int i = 0 ; i < p ; i++){
		int fb = b_search(c[i]);
		if(fb != -1)
			continue;
		int fa = a_search(c[i]);
		if(fa == -1)
			continue;
		++res;
		//a.erase(a.begin() + fa);
		//cout << c[i] << endl;
	}
	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
