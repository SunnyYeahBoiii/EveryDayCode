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
double ro(double var)
{
    double value = (int)(var * 10000 + .5);
    return (double)value / 10000;
}
void solve(){
    int n;
    cin >> n;
    ll x[n],y[n];
    double p,c,hs = 0,kmin = INT_MAX,kq[n];
    cin >> x[0] >> y[0];
    FOR(i,1,n) cin >> x[i] >> y[i];
    FOR(i,1,n) {
        kq[i] = sqrt((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]));
        kmin = min(kmin,kq[i]);
        //cout << kmin << ' ' << kq << '\n';
    }
    FOR(i,2,n) {
        c = ro(sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1])));
        kq[i] = ro(kq[i]); kq[i-1] = ro(kq[i-1]);
        if ((kq[i]*kq[i] < (kq[i-1]*kq[i-1]+c*c)) && (c*c < (kq[i-1]*kq[i-1]+kq[i]*kq[i])) && (kq[i-1]*kq[i-1] < (kq[i]*kq[i]+c*c))) {
            p = (kq[i]+kq[i-1]+c)/2;
            hs = 2*sqrt(p*(p-kq[i])*(p-kq[i-1])*(p-c))/c;
        }
        kmin = min(kmin,hs);
        //cout << kmin << ' ' << hs << '\n';
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
