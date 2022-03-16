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
    int t[n],r[n-1],dp[n] = {0};
    FOR(i,0,n-1) cin >> t[i];
    FOR(i,1,n-1) cin >> r[i];
    dp[0] = t[0];
    dp[1] = min(dp[0]+t[1],r[1]);
    FOR(i,2,n-1)
        dp[i] = min(dp[i-1]+t[i],dp[i-2]+r[i]);
    cout << dp[n-1];
}
int main(){
    fast;
    freopen("TICK.inp","r",stdin);
    freopen("TICK.out","w",stdout);
    solve();
    return 0;
}
