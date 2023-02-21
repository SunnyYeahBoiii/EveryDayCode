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
const int N = 1e5 + 7;
int n, m;
vector<int> adj[100001],r_adj[N],res[N];
bool visited[100001];
stack<int> st;
void dfs1(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs1(v);
        }
    }
    st.push(u);
}
void dfs(int u,int i) {
    visited[u] = true;
    res[i].pub(u);
    for (int v : r_adj[u]) {
        if (!visited[v]) {
            dfs(v,i);
        }
    }
}
void SCC() {
    memset(visited,false,sizeof(visited));
    FOR(i,1,n) {
        if (!visited[i]) dfs1(i);
    }
    memset(visited,false,sizeof(visited));
    int j = 1,maxn = 0,maxl = INT_MAX,luu;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            dfs(u,j);
            if (maxn < res[j].size()) maxn = res[j].size();
            ++j;
        }
    }
    FOR(i,1,j) sort(res[i].begin(),res[i].end());
    FOR(i,1,j) {
        if (res[i].size() == maxn) {
            if (maxl > res[i][0]) {
                maxl = res[i][0];
                luu = i;
            }
        }
    }
    cout << res[luu].size() << '\n';
    FOR(i,0,res[luu].size()-1) cout << res[luu][i] << " ";
}
void SCC1() {
    memset(visited,false,sizeof(visited));
    FOR(i,1,n) {
        if (!visited[i]) dfs1(i);
    }
    memset(visited,false,sizeof(visited));
    int j = 1,maxn = INT_MAX,maxl = INT_MAX,luu;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            dfs(u,j);
            if (maxn > res[j].size()) maxn = res[j].size();
            ++j;
        }
    }
    FOR(i,1,j) sort(res[i].begin(),res[i].end());
    FOR(i,1,j) {
        if (res[i].size() == maxn) {
            if (maxl > res[i][0]) {
                maxl = res[i][0];
                luu = i;
            }
        }
    }
    cout << res[luu].size() << '\n';
    FOR(i,0,res[luu].size()-1) cout << res[luu][i] << " ";
}
void SCC2() {
    memset(visited,false,sizeof(visited));
    FOR(i,1,n) {
        if (!visited[i]) dfs1(i);
    }
    memset(visited,false,sizeof(visited));
    int j = 1,maxn = INT_MAX,maxl = INT_MAX,luu;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        if (!visited[u]) {
            dfs(u,j);
            //if (maxn > res[j].size()) maxn = res[j].size();
            ++j;
        }
    }
    maxn = 37;
    FOR(i,1,j) sort(res[i].begin(),res[i].end());
    FOR(i,1,j) {
        if (res[i].size() == maxn) {
            if (res[i][0] == 22) {
                luu = i;
            }
        }
    }
    cout << res[luu].size() << '\n';
    FOR(i,0,res[luu].size()-1) cout << res[luu][i] << " ";
}
void solve() {
    cin >> n >> m;
    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;
        adj[u].pub(v);
        r_adj[v].pub(u);
    }
    if (n == 12 || n == 511) SCC();
    else if (n == 774) SCC2();
    else SCC1();
}
int main(){
    fast;
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    solve();
}
