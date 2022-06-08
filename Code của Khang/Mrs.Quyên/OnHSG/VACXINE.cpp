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
using namespace std;
void solve(){
    int n;
    cin >> n;
    ll dp[n],a[n];
    FOR(i,1,n) cin >> a[i];
    dp[1] = a[1];
    dp[2] = max(a[2],a[1]+a[2]);
    dp[3] = max(a[3]+a[1],a[3]+a[2]);
    dp[4] = max({a[4]+a[1]+a[2],dp[2]+a[4],a[4]+a[3]+a[1],a[1]+a[4]});
    FOR(i,5,n) dp[i] = max({dp[i-3]+a[i-1]+a[i],dp[i-4]+a[i-1]+a[i],dp[i-2]+a[i]});
    cout << max({dp[n-1],dp[n-2],dp[n]});
}
int main(){
    fast;
    // freopen("VACXINE.inp","r",stdin);
    // freopen("VACXINE.out","w",stdout);
    solve();
    return 0;
}
