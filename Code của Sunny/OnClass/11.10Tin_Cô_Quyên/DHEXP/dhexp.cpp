#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

void solve(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("dhexp.inp" , "r" , stdin);
	freopen("dhexp.out" , "w" , stdout);
    int n , k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    long long res = a[0];
    sort(a + 1 , a + n);
    for(int i = 1 ; i <= k; i++){
        res += a[n-i];
    }
    for(int i = 1 ; i < n-k ; i++)
        res -= a[i];
    cout << res << endl;
}

int main(){
    solve();
	return 0;
}

