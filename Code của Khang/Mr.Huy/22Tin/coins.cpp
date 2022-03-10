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
struct dta {
    ll x,y,z;
};
bool cmp(dta a,dta b) {
    if (a.z == b.z) return a.y < b.y;
    if (a.y == b.y && a.z == b.z) return a.x > b.x;
    return a.z < b.z;
}
void solve() 
{
    int n,m;
    cin >> n >> m;
    dta a[n];
    int dp[n] = {0};
    FOR(i,0,n-1) cin >> a[i].x;
    FOR(i,0,n-1) cin >> a[i].y;
    FOR(i,0,n-1) a[i].z = a[i].y-a[i].x;
    sort(a,a+n,cmp);
    FOR(i,0,n-1) {
        if (m >= a[i].z) m += a[i].x;
    }
    cout << m;
}
int main()
{
    fast;
    // freopen("COINS.inp","r",stdin);
    // freopen("COINS.out","w",stdout);
    solve();
    return 0;
}   
