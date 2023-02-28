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
ll A, B;
int dp[11][90][90], dig[11], prime[200];

void sieve(){
    prime[0] = prime[1] = 1;
    FOR(i,2,199)
        if (!prime[i])
            for(int j = i*2; j < 200; j += i) prime[j] = 1;
}

int reve(int pos, int odd, int even, int bound) {
    if (pos == 0) {
        if (even <= odd) return 0;
        if (prime[even - odd]) return 0;
        return 1;
    }
    if (!bound && dp[pos][odd][even] >= 0) return dp[pos][odd][even];

    int up = bound ? dig[pos]:9;

    int ans = 0;

    FOR(i,0,up) {
        int t;
        if (pos&1) t = reve(pos - 1, odd + i, even, bound && i == up);
        else t = reve(pos - 1, odd, even + i, bound && i == up);
        ans += t;
    }
    if (!bound) dp[pos][odd][even] = ans;
    return ans;
}

int check(int x) {
    int len = 0;
    while (x) {
        dig[++len] = x%10;
        x /= 10;
    }
    return reve(len, 0, 0, true);
}

void solve() {
    memset(dp, -1, sizeof(dp));
    sieve();
    cin >> A >> B;
    cout << check(B) - check(A-1);
}

int main(){
    fast;
    freopen("LUCIFER.inp","r",stdin);
    freopen("LUCIFER.out","w",stdout);
    solve();
}
