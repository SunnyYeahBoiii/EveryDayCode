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

int LIS(int l , int r , vector<int>& a){
	int f[a.size()+1];
	int res = 1;
	f[1] = l;
	int left , right , mid , best;
	for(int i = l + 1 ; i <= r ; i++){
		left = 1; right = res; best = 1;
		while(left <= right){
			mid = (left + right) /2;
			if(a[i] > a[f[mid]]){
				best = mid;
				left = mid + 1;
			}else right = mid - 1;
		}

		if(best == res){
			f[++res] = i;
		}

		if(a[i] < a[f[best]]){
			f[best+1] = i;
		}
	}
	return res;

}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	if(n % 2 == 0)
		cout << "YES" << endl;
	else{
		if(LIS(0 , n/2 , a) == LIS(n/2+1 , n-1 , a))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
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
