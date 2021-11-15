// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Category : Prefix Sum , Binary Search

Nothing Much To Say 

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bishu"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int a[10005];
int n;

void solve(){
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >>a[i];	
	sort(a , a+n);
	
	auto bin_search = [&](int tar){
		int l = 0 , r =n-1 , mid , best = -1;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] <= tar){
				best = max(best , mid);
				l = mid + 1;
			}
			else if(a[mid] > tar)
				r = mid - 1;
		}	

		return best;
	};
	
	int pref[10005];

	pref[0] = a[0];
	for(int i = 1 ; i < n ; i++)
		pref[i] = pref[i-1] + a[i];
	int q;
	cin >> q;
	int queries;
	for(int i = 0 ; i < q ; i++){
		cin >> queries;
		int k = bin_search(queries);
		cout << k+1 << " " << pref[k] << endl;
	}

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
