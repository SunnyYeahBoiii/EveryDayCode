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
const int N = 1e5+7;
int n,m,compo = 0;
int par[1001];
vector<int> adj[100001];
vector<int> res;
bool visited[100001];
void dfs(int u) {
    //cout << u << " ";
    visited[u] = true;
    for(int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}
void solve(){
    cin >> n >> m;
    FOR(i,1,n){
        int u,v;
        cin >> u >> v;
        adj[u].pub(v);
        adj[v].pub(u);
    }
    FOR(i,1,n) {
        if (!visited[i]) {
            dfs(i);
            compo++;
        }
    }
    cout << compo-1;
}
int main(){
    fast;
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    solve();
}
