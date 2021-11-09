#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	int n , m ;
	cin>>m >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin>>a[i];

	sort(a , a+n);

	int ans = 0 , minus = 0;
	ans = m / a[0];

	int back = ans;
	while(back > 1){
		minus += back/3;
		back /= 3;
	}

	back = ans;
	while(back > 1){
		ans += back / 3;
		back /= 3;
	}

	cout << ans - minus << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	FileInput();
	solve();
	return 0;
}
