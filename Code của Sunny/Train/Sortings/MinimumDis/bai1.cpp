// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bai1"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){

	int n, m;
	cin >> n >> m;

	vector<int> a(n) , b(m);

	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	for(int i = 0 ; i < m ; i++)
		cin >> b[i];

	sort(a.begin() , a.end() , greater<int>());
	sort(b.begin() , b.end());

	int i = 0 , j = m-1;

	int res = abs(a[i] - b[j]);

	while(i < n && j >= 0){
		int t = a[i] - b[j];
		if(t < 0)
			j--;
		else i++;

		if(abs(t) < res)
			res = abs(t);
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