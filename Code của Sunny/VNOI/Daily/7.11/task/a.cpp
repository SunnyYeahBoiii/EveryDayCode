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

int n , x , y;

bool test(int tar){
	//cout << tar/x + tar/y<< " " << n << endl;
	return (((tar / x) + (tar / y)) >= n-1);
}

void solve(){
	cin >> n >> x >> y;
	if(n == 1){
		cout << min(x , y) <<endl;
		return;
	}		
	int l = 0, r = 1e10+10 , mid , ans = r;
	while(l <= r){
		mid = (l+r)/2;
		//cout <<l << " " << r << " " << mid << endl;
		if(test(mid)){
			r = mid - 1;
			ans = min(ans , mid);
		}
		else 
			l = mid + 1;
		//cout << "ans = " << ans << endl;
	}

	cout << ans + min(x , y)<< endl;

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
