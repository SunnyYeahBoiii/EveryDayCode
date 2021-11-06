#include "bits/stdc++.h"

using namespace std;

int bin_search(int tar , vector<int> &a , int n){
	int l = 0 , r = n-1 , mid , best =  1<<30;
	while(l <= r){
		mid = (l+r)/2;
		if(a[mid] <= tar)
			l = mid + 1;
		else if(a[mid] > tar){
			best = min(best , mid);
			r = mid - 1;
		}
	}
	//cout << tar << " " << a[best] << endl;
	return best;

}

// Code xau qua :<

void solve(){
        int n , r;
        cin >> n >> r;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
                cin >> a[i];
        sort(a.begin(),  a.end());
        int left = a[0] , right = a[1] , res = 0 , ii = 0 , jj = 1;
        //cout << left << " " << right << endl;
	while(right < a[n-1] && jj < n && ii < n){
		jj = ii;
        	while(a[jj] <= left + r*2 && jj < n && ii < n)
			jj++;
		jj--;
		//cout << ii << " " << jj << endl;
		ii = jj+1;
		left = a[ii];
		res++;
        }

        cout << res << endl;
}

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        //freopen("RadioTrans.inp" , "r" , stdin);
        //
        //freopen("RadioTrans.out" , "w" , stdout);
        solve();
        return 0;
}
