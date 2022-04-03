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
    ll dp[n+5],dp1[n+5],a[n+5] = {0},b[n+5] = {0};
    FOR(i,0,n-1) cin >> a[i] >> b[i];
    dp[0] = a[0]+b[0];
    dp1[0] = b[0]+a[0];
    FOR(i,1,n-1) {
        dp[i] = max(dp[i-1]+abs(a[i]-a[i-1])+b[i],dp1[i-1]+abs(a[i]-b[i-1])+b[i]);
        dp1[i] = max(dp[i-1] + abs(b[i] - a[i-1]) + a[i], dp1[i-1] + abs(b[i] - b[i-1]) + a[i]); 
    }
    ll res = max(dp[n-1]+a[n-1],dp1[n-1]+b[n-1]);
    cout << res;
}
int main()
{
    fast;
    // freopen("ROCARD.inp","r",stdin);
    // freopen("ROCARD.out","w",stdout);
    solve();
    return 0;
}   