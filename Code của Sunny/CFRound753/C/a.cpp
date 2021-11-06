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

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}	
	sort(a , a+n);
	if(n == 1){
		cout << a[0] << endl;
		return;
	}

	int maxR[n];
	maxR[0] = a[0];
	int sum = 0;
	sum += a[0];
	for(int i = 1 ; i < n ; i++){
		maxR[i] = a[i] - sum;
		sum += maxR[i];
	}
	
	int res = -INF;
	for(int i = 0 ; i < n ; i++){
		res = max(res , maxR[i]);
	}
	cout << res <<endl;
	
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
