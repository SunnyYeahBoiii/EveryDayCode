#include "bits/stdc++.h"

using namespace std;

#define NAME "sherlock"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	int n , k , p;
	cin >> n >> k >> p;
	int a[n+2];
	for(int i = 1 ; i <= k ; i++)
		cin >> a[i];
	a[0] = 1; a[k+1] = n;
	sort(a , a+k);
	if(n - k < p){
		cout << "-1" << endl;
	}else{
		int cur = p;
		for(int i = 1 ; i <= k+1 ; i++){
			if(cur - (a[i] - a[i-1]) > 0){
				cur -= a[i] - a[i-1];
				continue;
			}
			cout << a[i-1] + cur << endl;
		}
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
