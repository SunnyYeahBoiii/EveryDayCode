// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int unsigned long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int w , h , n;
	cin >> w >> h >> n;
	
	auto test = [&](double x){
		int cd = x / w , cr = x / h;
		if(round(cd) * round(cr) >= n)
			return true;
		return false;
	};
	
	int l = 0 , r = 1 , mid , best = 1e18;
	
	while(!test(r))
		r *= 2;

	while(l <= r){
		mid = (l+r)/2;
		//cout << mid << endl;
		if(test(mid)){
			best = min(best , mid);
			r = mid - 1;
		}else l = mid + 1;
	}

	cout << best << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
