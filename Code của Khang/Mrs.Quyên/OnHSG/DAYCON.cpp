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
    int a[n],dp[n];
    FOR(i,0,n-1) cin >> a[i];
    int res = 0;
    dp[0] = 1;
    FOR(i,1,n-1) {
        dp[i] = 1;
        FOR(j,0,i-1) if (a[i] > a[j]) dp[i] = max(dp[i],dp[j]+1);
        res = max(res,dp[i]);
    }
    cout << res;
}
int main(){
    fast;
    // freopen("ALADDIN.inp","r",stdin);
    // freopen("ALADDIN.out","w",stdout);
    solve();
    return 0;
}
