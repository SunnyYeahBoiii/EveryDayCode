// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

dp[i] means the way to circle a[i] has went through the most circle

foreach a[j] < a[i] do binary_search to find a[k] that a[j]+a[k] = a[i];

dp[i] = max( every(max(dp[j] , dp[k]) found)

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
		
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);
	
	auto bin_search = [&](int tar , int range){
		int l = 0 , r = range , mid;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] < tar)
				l = mid + 1;
			else if(a[mid] > tar)
				r = mid - 1;
			else return mid;
		}

		return -1LL;
	};
	
	
	
	int dp[n];
	dp[0] = 1;
	dp[1] = 1;

	for(int i = 2 ; i < n ; i++){
		dp[i] = 1;
		for(int j = 0 ; j < i ; j++){
			if(a[i] == 2*a[j])
			continue;
			int k = bin_search(a[i] - a[j], n);
			if(k == -1)
				continue;

			dp[i] = max(dp[i] ,max(dp[j] , dp[k]) + 1);

		}
	}
	int res = 0;
	for(int i = 0 ; i < n ; i++)
		res= max(res , dp[i]);
	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
