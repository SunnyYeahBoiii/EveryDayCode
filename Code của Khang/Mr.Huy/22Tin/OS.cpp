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
struct dta {
    ll x,y;
};
bool cmp(dta a,dta b) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}
void solve() 
{
    int n,m;
    cin >> m >> n;
    vector<int> dp;
    dta a[n+5];
    FOR(i,0,n-1) cin >> a[i].x >> a[i].y;
    sort(a,a+n,cmp);
    int res = 1;
    dp.push_back(0);
    FOR(i,1,n-1) {
        if (a[dp.back()].y < a[i].x) {
            dp.push_back(i);
            res++;
            continue;
        }
        int l = 0 , r = dp.size()-1 , mid , best = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[dp[mid]].y <= a[i].y && a[dp[mid+1]].x > a[i].y)
                best = mid;
            else if(a[dp[mid]].y < a[i].x)
                l = mid + 1;
            else r = mid - 1;
            }
            dp[best] = res;
    }
    cout << dp.size() << endl;
}
int main()
{
    fast;
    // freopen("OS.inp","r",stdin);
    // freopen("OS.out","w",stdout);
    solve();
    return 0;
}   