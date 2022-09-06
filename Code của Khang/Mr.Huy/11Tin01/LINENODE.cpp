#include <bits/stdc++.h>
typedef long long ll;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
long double x,y;
void solve(){
    ll  D,Dx,Dy,a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    //while (cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2) {
        D = a1*b2-a2*b1;
        Dx = b1*c2 –b2*c1;
        Dy = c1*a2-c2*a1;
        x = Dx/D;
        y = Dy/D;
        if (D != 0) cout << 1 << setprecision(2) << fixed << x << ' ' << y;
        else if (D == 0 && (Dx != 0 || Dy != 0)) cout << "0\n";
        else if (D == 0 && Dx == Dy && Dx == D) cout << "2\n";
    //}
}
int main(){
    fast;
    //freopen("LINENODE.inp","r",stdin);
    //freopen("LINENODE.out","w",stdout);
    solve();
}
