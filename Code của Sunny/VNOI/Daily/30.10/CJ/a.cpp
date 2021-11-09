#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30
vector<pair<int , int>> edge[100000];
int best[100000];

void djikstra(int z , int y){
	for(int i = 0 ; i < 100000 ; i++)
		best[i] = INF;
	queue<int> q;
	q.push(z);
	best[z] = 0;
	while(!q.empty()){
		int u = q.front();
		q.pop();

		for(auto p : edge[u]){
			int v = p.first , c = p.second;
			if(best[v] > best[u] + c){
				best[v] = best[u] + c;
				q.push(v);
			}
		}
	}	

	cout << best[y] << endl;

}

void solve(){
	int n , m , q;
	cin >> n >> m >> q;
	for(int i = 0 ; i < m ; i++){
		int u , v , c;
		cin >> u >> v >> c;
		edge[u].push_back({v , c});
		edge[v].push_back({u , c});
	}

	int s , t;
	for(int i = 0 ; i < q; i++){
		cin >> s >> t;
		djikstra(s , t);
	}
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}            
