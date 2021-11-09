// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Sortings , Data Structures

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "thongke"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int a;
	map<int , int> cnt;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		cnt[a]++;
	}
	
	cout << cnt.size() <<endl;
	int count = 0;
	for(auto p : cnt){
		int u = p.first , v = p.second;
		count = max(count , p.second);
	}
	cout << count << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
