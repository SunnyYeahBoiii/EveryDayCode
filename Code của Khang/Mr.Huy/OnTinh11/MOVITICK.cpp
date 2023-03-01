#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int, int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e5+5;
int n;
ll t[N], h[N], dp[N];

void solve() {
    cin >> n;
    FOR(i,1,n) cin >> t[i];
    FOR(i,2,n) cin >> h[i];
    dp[1] = t[1];
    dp[2] = min(dp[1] + t[2], h[2]);
    FOR(i,3,n) dp[i] = min(dp[i-1] + t[i], dp[i-2] + h[i]);
    cout << dp[n];
}

int main(){
    fast;
    freopen("MOVITICK.inp","r",stdin);
    freopen("MOVITICK.out","w",stdout);
    solve();
}
