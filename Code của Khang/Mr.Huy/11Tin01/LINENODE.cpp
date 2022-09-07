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
    double d,d1,d2,x,y;
    ll a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    //while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {
        d = a1*b2-a2*b1;
        d1 = b1*c2-b2*c1;
        d2 = c1*a2-c2*a1;
        x = d1/d;
        y = d2/d;
        if (d1 == 0) x = abs(x);
        if (d2 == 0) y = abs(y);
        if (d != 0) {
            cout << 1 << ' ';
            //cout << d1 << ' ' << d2 << ' ' << d << '\n';
            cout << setprecision(2) << fixed << x << ' ';
            cout << setprecision(2) << fixed << y << '\n';
        }
        else if (d == 0 && (d1 != 0 || d2 != 0)) cout << 0 << '\n';
        else if (d == 0 && d1 == d2 && d1 == d) cout << 2 << '\n';
    //}
}
int main(){
    fast;
    //freopen("LINENODE.inp","r",stdin);
    //freopen("LINENODE.out","w",stdout);
    solve();
}
