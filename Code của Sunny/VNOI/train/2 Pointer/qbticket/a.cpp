// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int unsigned long long
#define endl "\n"
#define INF LLONG_MAX

void solve(){

    int l1 , l2 , l3 , c1 , c2 , c3;
    cin >> l1 >> l2 >> l3 >> c1 >> c2 >> c3;
    int n , s , e;
	cin >> n >> s >> e;
	vector<int> a(n);
	vector<int> dp;

	sort(a.begin() , a.end());
	if(s > e)
		swap(s , e);
	dp.resize(n , INF);

	dp[s-1] = 0;

	a[0] = 1;
	for(int i = 1 ; i <= n-1 ; i ++)
		cin >> a[i];

	int u1 , u2 , u3;
	u1 = u2 = u3 = s-1;

	for(int v = s ; v < e ; v++){
		while(a[v] - a[u1] > l1)
			u1++;
		
		while(a[v] - a[u2] > l2)
			u2++;

		while(a[v] - a[u3] > l3)
			u3++;
		dp[v] = min(dp[u1] + c1 , min(dp[u2] + c2 , dp[u3] + c3));
	}

	cout << dp[e-1] << endl;
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