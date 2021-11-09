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
int main()
{
    fast;
    int n,m,maxi = 0;
    ll maxn = 0;
    cin >> m >> n;
    ll a[m+1][n+1],dp[m+1][n+1];
    map<ll,int> mp;
    FOR(i,1,m) FOR(j,1,n) cin >> a[i][j];
    FOR(i,1,m) {
        a[i][0] = 0;
        a[i][n+1] = 0;
    }
    FOR(i,1,n) {
        a[0][i] = 0;
        a[m+1][0] = 0;
    }
    FOR(i,1,m) FOR(j,1,n) {
        dp[i][j] = a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1];
        mp[dp[i][j]]++;
        if (mp[dp[i][j]] >= maxi) {
            maxi = mp[dp[i][j]];
            if (maxi == mp[dp[i][j]]) maxn = 0;
            maxn = max(maxn,dp[i][j]);
        }
    }
    cout << maxn;
    return 0;
}
