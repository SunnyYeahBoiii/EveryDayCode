#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int, int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e5 + 7;
int n, m;
vector<int> adj[100001],q[100001];
bool visited[100001];
void dfs(int u,int i) {
    q[i].pub(u);
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v,i);
        }
    }
}
void solve() {
    cin >> n >> m;
    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
    }
    int ans = 0;
    FOR(i,1,n) {
        if (!visited[i]) {
            ++ans;
            dfs(i,i);
        }
    }
    FOR(i,1,n) sort(q[i].begin(),q[i].end(),greater<int>());
    cout << ans << '\n';
    FOR(i,1,n) {
        if (q[i].size() == 0) continue;
        cout << q[i].size() << " ";
        FOD(j,q[i].size()-1,0) cout << q[i][j] << " ";
        cout << '\n';
    }
}
int main(){
    fast;
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    solve();
}
