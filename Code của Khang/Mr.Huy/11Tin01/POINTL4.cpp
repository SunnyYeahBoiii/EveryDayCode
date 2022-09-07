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
    ll x0, y0, x1, y1, x2, y2;
    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
    //while (cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2) {
        ll a,b,c;
        a = y1-y2;
        b = x2-x1;
        c = x1*y2-x2*y1;
        if (a*x0+b*y0+c == 0 && (x0-x1)*(x2-x1) >= 0 && (y0-y1)*(y2-y1) >= 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    //}
}
int main(){
    fast;
    //freopen("POINTL4.inp","r",stdin);
    //freopen("POINTL4.out","w",stdout);
    solve();
}
