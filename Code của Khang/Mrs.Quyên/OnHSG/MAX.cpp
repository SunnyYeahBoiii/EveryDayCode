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
ll dp[1005][1005] = {0},a[1005][1005],res = 0;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<ll> p;
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    FOR(j,1,m) 
    FOR(i,1,n) {
        dp[i][j] = max({dp[i][j-1],dp[i+1][j-1],dp[i-1][j-1]})+a[i][j];
    }
    int k,m1 = m;
    FOR(i,1,n) 
        if (res < dp[i][m]) {
            res = dp[i][m];
            k = i;
        }
    cout << res << '\n';
    p.pub(k);
    res -= a[k][m1];
    while (res != 0) {
        if (dp[k][m1-1] == res) m1--;
        else if (dp[k+1][m1-1] == res) k++,m1--;
        else if (dp[k-1][m1-1] == res) k--,m1--;
        p.pub(k);
        res -= a[k][m1]; 
    }
    FOD(i,p.size()-1,0) cout << p[i] << '\n';
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
