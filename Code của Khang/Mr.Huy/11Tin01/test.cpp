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
    ll x[n],y[n];
    double hs = 0,kmin = INT_MAX,kq = 0;
    cin >> x[0] >> y[0];
    FOR(i,1,n) cin >> x[i] >> y[i];
    FOR(i,1,n) {
        kq = sqrt((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]));
        kmin = min(kmin,kq);
        //cout << kmin << ' ' << kq << '\n';
    }
    FOR(i,2,n) {
        hs = abs((-y[i]+y[i-1])*x[0]+(x[i]-x[i-1])*y[0]+(-y[i]+y[i-1])*(-x[0])+(x[i]-x[i-1])*(-y[0]))/sqrt((-y[i]+y[i-1])*(-y[i]+y[i-1])+(x[i]-x[i-1])*(x[i]-x[i-1]));
        kmin = min(kmin,hs);
        cout << kmin << ' ' << hs << '\n';
    }
    cout << setprecision(4) << fixed << kmin;
}
int main(){
    fast;
    //freopen("BILL.inp","r",stdin);
    //freopen("BILL.out","w",stdout);
    solve();
    //solve();
}
