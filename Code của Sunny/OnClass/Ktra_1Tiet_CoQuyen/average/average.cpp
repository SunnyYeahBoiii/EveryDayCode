// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Category : Binary_Search and Two Pointer

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "average"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

bool sliceb(vector<int>& a , double x , int n , int k){
	double b[n+1];
	for(int i = 0 ; i < n; i++)
		b[i] = (double)a[i] - x;
	double rev = 0 , rc = -INF, cur = 0 , left = 0 , right = 0;
	int cnt = 0 , i = 0 , j = k;
	for(int l = 0 ; l < j ; l++)
		right += b[l];
	if(right >= 0) return true;
	while( j < n ){
		//cout << i << " " << j << endl;
		right += b[j];
		left += b[i];
		if(left < 0){
			right -= left;
			left = 0;
		}
		if(right >= 0)
			return true;
		i++;
		j++;
	}

	return false;
}

void solve(){
	int n , k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	double l = INT_MIN , r = INT_MAX;
	double best = 0 , mid;
	while(r - l > 0.000001){
		mid = l+(r-l)/(double)2;
		//cout <<l << " " << r << " " << mid << endl;
		if(sliceb(a , mid , n , k)){
			best = mid; 
			l = mid;
		}else r = mid;

	}

	cout << fixed << setprecision(3)<< best;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
	cout << fixed << setprecision(3);
        solve();
        return 0;
}        
