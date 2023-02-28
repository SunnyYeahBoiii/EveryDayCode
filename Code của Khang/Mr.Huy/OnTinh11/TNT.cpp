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
const int N = 105;
ll A, B;
int dp[15][N], dig[25], prime[N];
void sieve(){
    prime[0] = prime[1] = 1;
    FOR(i,2,N-1)
        if (!prime[i])
            for(int j = i*2; j < N; j += i) prime[j] = 1;
}
int reve(int pos, int sum, int bound) {
    if (pos == 0) return prime[sum] ? 0:1;
    if (!bound && dp[pos][sum] >= 0) return dp[pos][sum];
    int up = bound ? dig[pos]:9;
    int ans = 0;
    FOR(i,0,up) ans += reve(pos - 1, sum + i, bound && i == up);
    if (!bound) dp[pos][sum] = ans;
    return ans;
}
int check(int x) {
    int len = 0;
    while (x) {
        dig[++len] = x%10;
        x /= 10;
    }
    return reve(len, 0, true);
}
void solve() {
    memset(dp, -1, sizeof(dp));
    sieve();
    cin >> A >> B;
    cout << check(B) - check(A-1);
}
int main(){
    fast;
    freopen("TNT.inp","r",stdin);
    freopen("TNT.out","w",stdout);
    solve();
}
