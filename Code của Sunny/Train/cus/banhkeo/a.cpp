#include <bits/stdc++.h>

using namespace std;

int n , m , k;
vector<int> path[1005];
vector<int> p;
map<int , bool> passed;

void dfs(int x){
    if(passed[x] == true)
        return;
    //cout << x << endl;
    for(int i = 0 ; i < path[x].size() ; i++){
        passed[path[x][i]] = true;
        dfs(path[x][i]);
    }
}

void solve(){

    cin >> n >> m >> k;
    p.resize(k);
    int lol;
    for(int i = 0 ; i < k ; i++){
        cin >> p[i];
    }

    int mm = *min_element(p.begin() , p.end());

    int u , v , x;

    for(int i = 0 ; i < m ; i++){
        cin >> u >> v >> x;
        //cout << u << " " << v << " " << x << " " << mm << endl;
        if(x < mm)
            continue;
        path[u].push_back(v);
        path[v].push_back(u);
    }

    int cnt = 0;

    for(int i = 1 ; i <= n ; i++){
        if(passed[i] == true)
            continue;
        dfs(i);
        cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    freopen("banhkeo.inp" , "r" , stdin);
    freopen("banhkeo.out" , "w" , stdout);
    solve();
    return 0;
}
