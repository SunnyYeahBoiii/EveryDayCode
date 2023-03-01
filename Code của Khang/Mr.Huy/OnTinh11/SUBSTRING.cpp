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
string x,y;

void solve() {
    cin >> x >> y;
    int maxn = 0;
    int n = x.size(), m = y.size();
    int f[n + 1][m + 1];
    FOR(i,0,n) FOR(j,0,m) {
        if (!i || !j) f[i][j] = 0;
        else if (x[i-1] == y[j-1])  f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = 0;
        maxn = max(maxn, f[i][j]);
    }
    cout << maxn;
}

int main(){
    fast;
    freopen("SUBSTRING.inp","r",stdin);
    freopen("SUBSTRING.out","w",stdout);
    solve();
}
