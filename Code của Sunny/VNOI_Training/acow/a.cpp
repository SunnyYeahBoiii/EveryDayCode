// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Category : Binary Search , Sortings

psudecode for test function:

int tar , int leftover = l , int ltv = K

	for ( i = n - 1 ; i >= 0 && leftover > 0 && ltv > 0 ; i--)[
		if a[i] < tar [
			if leftover < tar - a[i]
				break
			else leftover -= tar - a[i];
		]
		count++
		ltv--;
	]

	return count >= tar;
			
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n , k , l;
	cin >> n >> k >> l;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);	
	auto test = [&](int tar , int c[]){
		
		
	};

	int left = 1 , r = n , mid , best = -1;

	while(left <= r){
		mid = (left + r) / 2;
		if(test(mid , a)){
			best = max(best , mid);
			left = mid + 1;
		}else r = mid - 1;
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
