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
    int s,x,n,q,l,r;
    cin >> n >> q;
    int a[n],dp[n];
    FOR(i,0,n-1) {
        cin >> x;
        if (x <= 0) a[i] = 0;
        else a[i] = x;
        if (i == 0) dp[i] = a[i];
        else dp[i] = dp[i-1]+a[i];
    }
    FOR(i,0,q-1) {
        cin >> l >> r;
        s = dp[r-1]-dp[l-2];
        if (s < 0) s = 0;
        cout << s << '\n';
    }
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
