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
bool ok;
int n,c;
ll a[100000+5];
void xl(ll m) {
    ok = false;
    ll tmp = 1,h = 1,k = 2,d = 1;
    while (tmp < c && d != n) {
        if (a[k]-a[h] >= m) {
            tmp++;
            h = k;
            k++;
        } else k++;
        d++;
    }
    if (tmp == c) ok = true;
}
void solve(){
    cin >> n >> c;
    FOR(i,1,n) cin >> a[i];
    sort(a+1,a+1+n);
    ll l = a[1],r = a[n],res= 0 ;
    while (l <= r) {
        ll m = l+(r-l)/2;
        xl(m);
        if (ok) {
            l = m+1;
            res = m;
        }
        else r = m-1;
    }
    cout << res;
}
int main(){
    fast;
    // freopen("CHANBO.inp","r",stdin);
    // freopen("CHANBO.out","w",stdout);
    solve();
    return 0;
}
