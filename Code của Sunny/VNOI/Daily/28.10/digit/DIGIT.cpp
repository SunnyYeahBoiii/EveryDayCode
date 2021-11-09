#include "bits/stdc++.h"

using namespace std;

#define NAME "digit"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	string a;
	long long n , k;
	cin >> a;
	cin >> n >> k;
	unsigned long long len = a.size()*pow(2 , n);
        if(k > len)
		cout << "-1" << endl;
	else{
		k -= 1;
		string b = a;
		reverse(b.begin() , b.end());
		string res = a;
		res += b;
		cout << res[k % res.size()] << endl;
	}	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
            
