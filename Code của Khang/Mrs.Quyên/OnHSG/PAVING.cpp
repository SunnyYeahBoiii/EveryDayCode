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
ll lcm(ll a,ll b) {
    return (a/__gcd(a,b))*b;
}
void solve(){
    int n;
    cin >> n;
    ll a[n],res = 0;
    FOR(i,0,n-1) cin >> a[i];
    res = a[0];
    FOR(i,1,n-1) res = lcm(res,a[i]);
    FOR(i,0,n-1) cout << res/a[i] << '\n';
}
int main(){
    fast;
    // freopen("PAVING.inp","r",stdin);
    // freopen("PAVING.out","w",stdout);
    solve();
    return 0;
}
