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
    ll x;
    char y;
};
bool cmp(dta a,dta b) {
    if (a.y == b.y) return (a.x < b.x);
    return (a.y < b.y);
}
void solve()
{
    int n;
    string s;
    cin >> n;
    dta a[n];
    FOR(i,0,n-1) cin >> a[i].x;
    FOR(i,0,n-1) cin >> a[i].y;
    sort(a,a+n,cmp);
    FOR(i,0,n-1) {
        if (a[i].y == 'B' && a[i].x >= i+1) continue;
        else if (a[i].y == 'R' && a[i].x <= i+1) continue;
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
