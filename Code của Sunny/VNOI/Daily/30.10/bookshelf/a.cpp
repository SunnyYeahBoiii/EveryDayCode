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
	int a[n];
	vector<int> idx;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		if(a[i] == 1)
			idx.push_back(i);
	}

	int moves = 0;
	int i = idx.size() -1;
	while(i > 0){
		moves += idx[i] - idx[i-1]-1;
		i--;
	}

	cout << moves << endl;
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
