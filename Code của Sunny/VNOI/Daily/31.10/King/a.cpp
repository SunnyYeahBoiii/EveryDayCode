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
	int n;
	cin >> n;
	int x , y;
	cin >> x >> y;
	if(x == 1 && y == 1){
		cout << "White" << endl;
		return;
	}
	else if(x == y && x == n){
		cout << "Black" << endl;
		return;
	}
	int Wc = abs(x - 1) + abs(y-1), Bc = abs(n-x) + abs(n-y);
	cout << ((Bc >= Wc) ? "White" : "Black") << endl;
	//cout << Wc << " " << Bc << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
