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
unsigned long long n;
using namespace std;
const int N = 1e5;
ll a[N],dp[N];
void solve(){
    int n,k;
    cin >> n >> k;
    FOR(i,1,n) cin >> a[i];
    dp[0] = 0;
    ll res = INT_MIN;
    FOR(i,1,k) {
        if (i%n != 0) dp[i] = dp[i-1]+a[i-(i/n)*n];
        else dp[i] = dp[i-1]+a[n];
        res = max(res,dp[i]);
    }
    cout << res;
}
int main()
{
    fast;
    // freopen("MOUSEW.inp","r",stdin);
    // freopen("MOUSEW.out","w",stdout);
    solve();
    return 0;
}
