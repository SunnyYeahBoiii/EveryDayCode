// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

sort

res = max(a[n-1]*a[n-2]*a[n-3],
	  a[0]*a[1]*a[n],	
    	  a[0]*a[1]*a[2])		

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "tichmax"
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
	cout << max(a[n-1]*a[n-2]*a[n-3],max(a[0]*a[1]*a[n-1],a[0]*a[1]*a[2]));		
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
