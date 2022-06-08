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
ll msum(ll a[],int n) {
    ll dp[n];
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2]+a[0];
    if (n == 1) return a[0];
    else if (n == 2) return max(a[0],a[1]);
    else if (n == 3) return max(dp[2],dp[0]);
    else {
        FOR(i,3,n-1) dp[i] = a[i]+max(dp[i-2],dp[i-3]);
        return max(dp[n-1],dp[n-2]);
    } 
}
void solve(){
    int n;
    cin >> n;
    ll a[n];
    FOR(i,0,n-1) cin >> a[i];
    cout << msum(a,n);
}
int main()
{
    fast;
    // freopen("OFTEN.inp","r",stdin);
    // freopen("OFTEN.out","w",stdout);
    solve();
    return 0;
}
