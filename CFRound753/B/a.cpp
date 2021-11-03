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
	int x , n;
	cin >> x >> n;

	if(x % 2 == 0){
		if(n % 4 == 0)
			cout << x << endl;
		else if(n % 4 == 1)
			cout << x-n << endl;
		else if(n % 4 == 2)
			cout << x + 1 << endl;
		else if(n % 4 == 3)
			cout << x + n + 1 << endl;
	}else if(x % 2 != 0){
		if(n % 4 == 0)
			cout << x << endl;
		else if(n % 4 == 1)
			cout << x + n << endl;
		else if(n % 4 == 2)
		       cout << x - 1 << endl;
		else if(n % 4 == 3)
			cout << x - n - 1 << endl;	
	}
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
