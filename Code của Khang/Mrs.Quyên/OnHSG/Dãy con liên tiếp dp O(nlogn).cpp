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
int bs(vector<ll> &a,int l,int r,int k){
    while (r-l > 1) {
        int m = l+(r-l)/2;
        if (a[m] >= k) r = m;
        else l = m;
    }
    return r;
}
void solve(){
    int n;
    cin >> n;
    ll a[n];
    FOR(i,0,n-1) cin >> a[i];
    vector<ll> dp(n,0);
    dp[0] = a[0];
    int res = 1;
    FOR(i,1,n-1) {
        if (a[i] < dp[0]) dp[0] = a[i];
        else if (a[i] > dp[res-1]) dp[res++] = a[i];
        else dp[bs(dp,-1,res-1,a[i])] = a[i];
    }
    cout << res;
}
int main(){
    fast;
    freopen("LIS.inp" , "r" , stdin);
	freopen("LIS.OUT" , "w" , stdout);
	solve();
	return 0;
}
