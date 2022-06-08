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
int a[1005][1005],dp[1005][1005];
void solve(){
    int n,m,q;
    cin >> n >> m;
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    cin >> q;
    dp[1][1] = a[1][1];
    FOR(i,2,m) dp[1][i] = dp[1][i-1]+a[1][i];
    FOR(i,2,n) dp[i][1] = dp[i-1][1]+a[i][1];
    FOR(i,2,n) {
        FOR(j,2,m) dp[i][j] = dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j];
    }
    FOR(i,1,q) {
        int x,y;
        cin >> x >> y;
        cout << dp[x][y] << "\n";
    }
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
