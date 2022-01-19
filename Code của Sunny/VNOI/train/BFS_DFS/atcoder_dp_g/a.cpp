//   Author : Phuong aka SunnyYeahBoiii
//   Day : Unknown
   
#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define endl "\n"

using namespace std;

vector<int> edge[100005];
int n , m;
int dp[100005];

int dfs(int u , int steps){
	if(dp[u] > 0)
		return dp[u];
	if(edge[u].size() == 0){
		dp[u] = 0;
		return 0;
	}
	int ret = 0;
	for(auto p : edge[u]){
		ret = max(ret ,dfs(p , steps+1));
	}

	dp[u] = ret + 1;
	return dp[u];	
}

void solve(){
	cin >> n >> m;
	int u , v;
	for(int i = 0 ; i < m ; i++){
		cin >> u >> v;
		edge[u].push_back(v);
	}
	memset(dp , 0 , sizeof(dp));
	int res = 0;
	for(int i = 0 ; i <= n ; i++){
		if(edge[i].size() > 0)res = max(res , dfs(i , 0));
	}
	cout << res << endl;
}

int main(){
	solve();
	return 0;
}
