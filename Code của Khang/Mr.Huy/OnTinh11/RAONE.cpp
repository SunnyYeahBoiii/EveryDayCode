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
const int N = 500;
ll A, B;
int dp[15][N], dig[N];

int reve(int pos, int v, int bound) {
    if (pos == 0) return v == 1;
    if (!bound && dp[pos][v] != -1) return dp[pos][v];

    int up = bound ? dig[pos]:9;

    int ans = 0,t;

    FOR(i,0,up) {
        if (pos&1) t = -1;
        else t = 1;

        ans += reve (pos - 1, v + i*t, bound && i == up);
    }
    if (!bound) dp[pos][v] = ans;
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
    cin >> A >> B;
    cout << check(B) - check(A-1);
}

int main(){
    fast;
    freopen("RAONE.inp","r",stdin);
    freopen("RAONE.out","w",stdout);
    solve();
}
