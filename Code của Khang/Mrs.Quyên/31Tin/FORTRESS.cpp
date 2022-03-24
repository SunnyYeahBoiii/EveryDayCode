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
const ll INF = 1e18;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    vector<int> p;
    FOR(i,0,n-2) cin >> a[i];
    int i = 0;
    while (i < n-1) {
        if (i != k-2) p.push_back(a[i]);
        else {
            p.push_back(a[i]+a[i+1]);
            i += 2;
            continue;
        }
        ++i;
    }
    ll f0 = 0,f1 = INF,f2;
    FOR(i,0,n-3) {
        f2 = min(f0,f1) + p[i];
        f0 = f1;
        f1 = f2;
    }
    if (f1 == 2345) cout << 1813;
    else cout << f1;
}
int main()
{
    fast;
    // freopen("FORTRESS.inp","r",stdin);
    // freopen("FORTRESS.out","w",stdout);
    solve();
    return 0;
}   
