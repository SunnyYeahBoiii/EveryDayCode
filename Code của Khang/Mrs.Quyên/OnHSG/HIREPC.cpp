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
#define MAXN 100001
struct dta {
    int x,y,z;
};
bool cmp(dta a,dta b) {
    return a.x < b.x;
}
void solve() 
{
    int n;
    ll maxn = 0;
    cin >> n;
    int dp[n+5] = {0};
    dta a[n+5];
    FOR(i,1,n) cin >> a[i].x >> a[i].y >> a[i].z;
    sort(a+1,a+n+1,cmp);
    int res = 0;
    FOR(i,1,n) {
        dp[i] = a[i].z;
        FOR(j,0,i-1)
            if (a[i].x >= a[j].y) dp[i] = max(dp[i],dp[j]+a[i].z);
        res = max(res,dp[i]);
    }
    cout << res;
}
int main()
{
    fast;
    // freopen("HIREPC.inp","r",stdin);
    // freopen("HIREPC.out","w",stdout);
    solve();
    return 0;
}   