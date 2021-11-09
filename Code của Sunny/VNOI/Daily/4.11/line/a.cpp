// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

dpp[i] means the best way to chose ends with + a[i]
dpm[i] means the best way to chose ends with - a[i]

dpp[i] = max(dpm[2 -> i-1) + a[i] , dpp[i])
dpm[i] = max(dpp[2 -> i-1]) + a[i] , dpm[i]);

use an Prefix array to store max dpm[2-> i] and dpp[1->i]

prefp[i] = max(prefp[i-1] , dpp[i]);
prefm[i] = max(prefm[i-1] , dpm[i]);

the answer is the max(dpp[i] , dpm[i]) for every i < n

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
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	if(n == 1){
		cout << a[0] << endl;
		return;
	}
	int dpp[n] , dpm[n] , prefp[n] , prefm[n];

	dpp[0] = a[0];
	dpm[0] = -INF;
	dpp[1] = a[1];
	dpm[1] = a[0] - a[1];
	prefp[0] = dpp[0];
	prefp[1] = max(dpp[1] , prefp[0]);
	prefm[0] = -INF;
	prefm[1] = dpm[1];
	for(int i = 2 ; i < n ; i++){
		dpp[i] = max(max(dpp[i-1] , prefm[i-1] + a[i]) , a[i]);
		dpm[i] = max(dpm[i-1] , prefp[i-1] - a[i]);
		prefp[i] = max(prefp[i-1] , dpp[i]);
		prefm[i] = max(prefm[i-1] , dpm[i]);
	}
	/* 
	// This is what i call DEBUG
	for(int i = 0 ; i < n ; i++)
		cout << dpp[i] << " ";
	cout << endl;
	for(int i = 0 ; i < n ; i++){
		cout << dpm[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < n ; i++)
		cout << prefp[i]<< " ";
	cout << endl;
	for(int i = 0 ; i < n ; i++)
		cout << prefm[i] << " ";
	cout << endl;
	*/

	cout << max(prefp[n-1] , prefm[n-1]);
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
