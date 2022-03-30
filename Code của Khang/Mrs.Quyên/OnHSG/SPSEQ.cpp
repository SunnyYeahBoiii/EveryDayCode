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
int lis(int n,ll a[]) {
    int sum = 0;
    vector<int> l,l2,dp(n),dp2(n);
    l.pub(a[0]);
    FOR(i,1,n-1) {
        if (l.back() < a[i]) l.pub(a[i]);
        else {
            int inx = lower_bound(l.begin(),l.end(),a[i])-l.begin();
            l[inx] = a[i];
        }
        dp[i] = l.size();
    }
    l2.pub(a[n-1]);
    FOD(i,n-2,0) {
        if (l2.back() < a[i]) l2.pub(a[i]);
        else {
            int inx = lower_bound(l2.begin(),l2.end(),a[i])-l2.begin();
            l2[inx] = a[i];
        }
        dp2[i] = l2.size();
    }
    FOR(i,0,n-1) {
        sum = max(sum,min(dp[i],dp2[i])*2-1);
    }
    return sum;
}
void solve(){
    int n;
    cin >> n;
    ll a[n];
    FOR(i,0,n-1) cin >> a[i];
    cout << lis(n,a);
}
int main(){
    fast;
    // freopen("ADVSINBAD.inp","r",stdin);
    // freopen("ADVSINBAD.out","w",stdout);
    solve();
    return 0;
}
