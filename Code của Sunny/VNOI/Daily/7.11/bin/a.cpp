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
#define INF 1 << 31

void solve(){
	int n , k;
	cin >> n >> k;
	cout << fixed << setprecision(10) <<endl;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	auto test = [&](double x){
		int cnt = 0;
		for(int i = 0 ; i < n ; i++)
			cnt += floor(a[i]/x);

		return (cnt >= k);
	};
    	int c = 0;
	double l = 1 , r = 1e9+10 , mid;
	while(c <= 100){
		mid = (l + r)/2;
		cout << l << " " << r << endl; 
		//cout << mid << endl;
		if(test(mid)){
			l = mid;
		}else r = mid;
		++c;
	}

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        

