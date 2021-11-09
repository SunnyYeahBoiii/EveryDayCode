#include "bits/stdc++.h"

using namespace std;

#define NAME "digit"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME"_trau.out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	string a[100];
	cin >> a[0];
	int n , k;
	cin >> n >> k;
	// trau
	for(int i = 1  ; i <= n ; i++){
		string b = a[i-1];
		reverse(b.begin() , b.end());
		a[i] = a[i-1];
		a[i] += b;
	}

	if(k > a[n].size())
		cout << "-1" << endl;
	else cout << a[n][k-1] << endl;

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}    
