// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "C"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
//#define int long long
#define endl "\n"
#define INF LLONG_MAX

void solve(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		a[i] = a[i] % 200;
	}

	//for(int i = 0 ; i < n ; i++)
	//	cout << a[i] << " ";
	//cout << endl;

	map<int , int> cnt;
	int res = 0;
	for(int i = 0 ; i < n ; i++){
		res += cnt[a[i]];
		cnt[a[i]]++;
	}

	cout << res << endl;
}

	int32_t main(){
	FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}