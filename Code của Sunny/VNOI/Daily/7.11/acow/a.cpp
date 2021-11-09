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

int n , k , l;

int test(int tar , vector<int>& d){
	int count = 0;
	int left = k , cur = 0;

	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		a[i] = d[i];

	for(int i = n-1 ; i >= 0; i--){
		while(left > 0 && a[i] < tar){
			if(cur == 0){
				cur = l;
				left--;
			}
			if(cur >= tar - a[i]){
				cur -= tar-a[i];
				a[i] = tar;
			}else{
				a[i] += cur;
				cur = 0;
			}
		}
		if(a[i] >= tar)
			count++;
	}
	/*	
	cout << tar << endl;
	for(int i = 0 ; i < n ; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << count << endl << endl;;
	*/
	return count >= tar;
};

void solve(){

	cin >> n >> k >> l;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	sort(a.begin() , a.end());

	
	int le = 1 , r = 1e9 , mid ,c = 0, best = min(n , a[0]);
	while(c <= 100){
		mid = (le+r)/2;
		//cout << mid << endl;
		if(test(mid , a)){
			best = max(best , mid);
			le = mid + 1;
		}else r = mid - 1;
		c++;
	}	

	cout << best <<endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
