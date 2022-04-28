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
int par[1001];
vector<int> adj[1001];
vector<int> res;
bool visited[1001];
void xl(int des) {
    if (des == par[des]) {
        res.pub(des);
        return;
    }
    res.pub(des);
    des = par[des];
    xl(des);
}
void dfs(int u,int n) {
    visited[u] = true;
    if (u == n) {
        xl(n);
        return;
    }
    for(int v : adj[u]) {
        if (!visited[v]) {
            par[v] = u;
            dfs(v,n);
        }
    }
}
void solve(){
    int n,m;
    cin >> n >> m;
    FOR(i,0,m-1) {
        int u,v;
        cin >> u >> v;
        adj[u].pub(v);
        //adj[v].pub(u);
    }
    memset(visited,false,sizeof(visited));
    for (ll i = 0; i < n; i++)
        sort(adj[i].begin(), adj[i].end());
    par[1] = 1;
    dfs(1,n);
    reverse(res.begin(), res.end());
    for (auto v : res)
        cout << v << " ";
}
int main(){
    fast;
    // freopen("DFS.inp","r",stdin);
    // freopen("DFS.out","w",stdout);
    solve();
    return 0;
}
