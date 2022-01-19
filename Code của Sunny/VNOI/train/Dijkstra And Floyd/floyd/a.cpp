#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;


vector<pair<int , int>> edge[6000];
bool visited[5000];
long long best[5000];
int trace[5000];
queue<int> q;
int r , d , n;

void trace_back(int s , int t){
	vector<int> path;
	path.clear();
	path.push_back(t);
	int d = trace[t];
	while(d != -1){
		path.push_back(d);
		d = trace[d];
	}
	reverse(path.begin() , path.end());
	cout << path.size() << " ";
	for(int i = 0 ; i < path.size() ; i++) cout << path[i] << " ";
		cout <<"\n";
}

void bfs(int s , int t){
	r = s ; d = t;
	for(int i = 0 ; i <= n ; i++) visited[i] = false;
	for(int i = 0 ; i <= n ; i++) best[i] = 100000;
	for(int i = 0 ; i <= n ; i++) trace[i] = -1;
	best[s] = 0;
	for(int i = 0 ; i < n ; i++){

		int uBest = 0 , val = 100000;
		for(int i = 0 ; i <= n ; i++){
			if(visited[i] == false && best[i] < val){
				uBest = i;
				val = best[i];
			}
		}

		int u = uBest;
		visited[u] = true;
		int v , c;
		for(auto p : edge[u]){
			v = p.first; c = p.second;
			if(best[v] > best[u] + c){
				best[v] = best[u] + c;
				trace[v] = u;
			}
		}
	}
}

void solve(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int m , k;
	cin >> n >> m >> k;
	int u , v , c;
	for(int i = 0 ; i < m ; i++){
		cin >> u >> v >> c;
		edge[u].push_back({v , c});
		edge[v].push_back({u , c});
	}

	int p , s , t;
	for(int i = 0 ; i < k ; i++){
		cin >> p >> s >> t;
		bfs(s , t);
		if(p == 0){
			cout << best[t] << endl;
		}else{
			trace_back(s , t);
		}
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
