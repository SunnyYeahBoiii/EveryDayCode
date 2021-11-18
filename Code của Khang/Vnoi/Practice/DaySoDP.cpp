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
#define MAX_SUM 2505
void solve() 
{
    int n,k,res = INT_MIN;
    cin >> n >> k;
    int a[n],dp[n];
    dp[0] = 0;
    FOR(i,1,n) cin >> a[i];
    FOR(i,1,n) {
        dp[i] = dp[i-1]+a[i];
        FOR(j,1,k) 
            if (i-j >= 0) 
                dp[i] = max(dp[i],dp[i-j]+a[i]);
        res = max(res,dp[i]);
    }
    cout << res;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--) solve();
    solve();
    return 0;
}
