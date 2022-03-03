#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
#define MOD 14062008
using namespace std;
int a[1000000],dp[1000000];
void solve(){
    int k,n;
    cin >> n >> k;
    FOR(i,1,k) cin >> a[0],a[a[0]] = 1;
    dp[1] = 1;
    FOR(i,2,n)
        if (a[i] == 0) dp[i] = (dp[i-1]+dp[i-2])%MOD;
    cout << dp[n] << '\n';
}
int main(){
    freopen("VSTEPS.inp" , "r" , stdin);
	freopen("VSTEPS.OUT" , "w" , stdout);
	solve();
	return 0;
}
