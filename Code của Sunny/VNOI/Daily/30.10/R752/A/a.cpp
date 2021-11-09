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

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	int curp = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] <= i+1 + curp)
			continue;
		curp += a[i] - i - 1 - curp;
	}

	cout << curp << endl;
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
