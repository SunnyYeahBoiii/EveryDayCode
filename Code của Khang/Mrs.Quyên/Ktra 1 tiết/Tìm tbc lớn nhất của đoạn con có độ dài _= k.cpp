/*idea: chat nhi phan va kiem tra tbc*/
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
int n,k;
bool ok(double x,vector<int> &a,int k) {
    double b[n];
    FOR(i,0,n-1) b[i] = a[i]-x;
    double s = 0;
    double end = 0;
    FOR(i,0,k-1) s += b[i];
    if (s >= 0) return true;
    for(int i = 0, j = k; j < n; ++i,++j) {
        end += b[i];
        s += b[j];
        if (end < 0) {
            s -= end;
            end = 0;
        }
        if (s >= 0) return true;
    }
    return false;
}
double tbc(vector<int> &a,int k) {
    double res = 0,l = INT_MIN,h = INT_MAX;
    while (h-l > 1e-5) {
        double m = l+(h-l)/2;
        if (ok(m,a,k)) {
            l = m;
            res = m;
        } else h = m;
    }
    return res;
}
int main()
{
    fast;
    freopen("AVERAGE.inp","r",stdin);
    freopen("AVERAGE.out","w",stdout);
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    cout << setprecision(3) << fixed << tbc(a,k);
    return 0;
}
