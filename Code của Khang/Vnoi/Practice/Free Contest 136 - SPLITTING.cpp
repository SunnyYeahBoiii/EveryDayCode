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
#define MAX_INDEX 51
#define INF 100000
bool bsearch(ll m, ll a[], int n, int k)
{
    int d = 0;
    ll sum = 0;
    FOR(i,0,n-1) {
        if (a[i] > m)
            return false;
        sum += a[i];
        if (sum > m) {
            d++;
            sum = a[i];
        }
    }
    d++;
    if (d <= k)
        return true;
    return false;
}
void solve(){
    int k,n;
    cin >> n >> k;
    ll a[n],l,r = 0,res = 0,maxn = 0;
    FOR(i,0,n-1) {
        cin >> a[i];
        maxn = max(maxn,a[i]);
        r += a[i];
    }
    l = maxn;
    while (l <= r) {
        ll m = (l+r)/2;
        if (bsearch(m,a,n,k)) {
            res = m;
            r = m-1;
        } else l = m+1;
    }
    cout << res;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}   
