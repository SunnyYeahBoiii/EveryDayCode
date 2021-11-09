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
	int a , b , n;
	cin >> a >> b >> n;
	int cnt = 1;
	int cur = a+b;

	while(cur <= n){
		if(a <= b)
			a += b;
		else b += a;
		cur = a+b;
		cnt++;
	}

	cout << cnt << endl;
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
