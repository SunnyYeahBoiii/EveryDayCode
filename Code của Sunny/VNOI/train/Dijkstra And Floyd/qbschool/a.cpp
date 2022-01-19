//   Author : Phuong aka SunnyYeahBoiii
//   Day : Unknown
   
#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define endl "\n"
#define int long long
using namespace std;
int n , m;
const int INF = 1 << 30;
long long best[5011];
bool visited[5011];
long long cnt[5011];
vector<pair<int , int>> edge[5011];

void solve(){
	cin >> n >> m;
	int u , v , k , l;
	for(int i = 0 ; i < m ; i++){
		cin >> k >> u >> v >> l;
		if(k == 1)
			edge[u].push_back({v , l});
		else{
			edge[u].push_back({v , l});
			edge[v].push_back({u , l});
		}
	}

	for(int i = 1 ; i <= n ; i++){
		visited[i] = false;
		best[i] = INF;
		cnt[i] = 0;
	}
	best[1] = 0;
	cnt[1] = 1;
	for(int l = 0 ; l < n ; l++){

		int uBest = 0 , uVal = INF;
		for(int i = 1 ; i <= n ; i++){
			if(uVal > best[i] && visited[i] == false){
				uBest = i;
				uVal = best[i];
			}
		}

		int u = uBest;
		visited[u] = true;
		for(auto p : edge[u]){
			int v = p.first , c = p.second;
			if(best[v] > best[u] + c){
				best[v] = best[u] + c;
				cnt[v] = cnt[u];
			}else if(best[v] == best[u] + c)
				cnt[v] += cnt[u];
		}

	}
	cout << best[n] << " " << cnt[n] << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);	
	solve();
	return 0;
}
