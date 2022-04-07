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
#define MAX_INDEX 51
#define INF 100000
void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    ll a[105][105],dp[105][105],res = 5000;
    FOR(i,0,n) dp[i][0] = 1000;
    FOR(i,0,m) dp[0][i] = 1000;
    vector<ll> p;
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    dp[1][1] = a[1][1];
    FOR(i,1,n) 
    FOR(j,1,m) {
        if (i != 1 || j != 1) dp[i][j] = min({dp[i][j-1],dp[i-1][j-1],dp[i-1][j]})+a[i][j];
    }
    if (dp[n][m] <= k) cout << dp[n][m] << '\n';
    else cout << -1 << '\n';
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}
