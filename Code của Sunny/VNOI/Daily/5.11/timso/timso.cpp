// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Sortings, Implementationi, Data Structures

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "timso"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int a;
	map<int , bool> cnt;
	cnt.clear();
	int m1 = -INF , m2 = INF;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		cnt[a] = true;
		m1 = max(m1 , a);
		m2 = min(m2 , a);
	}
	cout << m2 << " " << m1 << endl;
	map<int , bool>::iterator it1 = cnt.begin() , it2 = it1;
	it1++;
	for( ; it1 != cnt.end() ; it1++){
		int l = it2 -> first , r = it1 -> first;
		if(r - l > 1){
			for(int i = l+1 ; i < r ; i++)
				cout << i << " ";
		}
		it2 = it1;
	}
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
