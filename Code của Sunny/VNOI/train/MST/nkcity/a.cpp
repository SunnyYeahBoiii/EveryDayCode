// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

struct info{
	int u , v , t;
};

info edge[10005];
int par[1005];

bool cmt(info a , info b){
	return a.t < b.t;
}

int root(int u){
	return par[u] < 0 ? u : par[u] = root(par[u]);
}

bool can(int x , int y){
	x = root(x) , y = root(y);
	if(x == y)
		return false;
	if(par[x] > par[y])
		swap(x,y);
	par[x] += par[y];
	par[y] = x;
	return true;
}

void solve(){
	int n , m;
	cin >> n >> m;
	
	int x , y , s;
	memset(par , -1 , sizeof(par));
	for(int i = 0 ; i < m ; i++){
		cin >> edge[i].u >> edge[i].v >> edge[i].t;
	}

	sort(edge , edge+m , cmt);

	int res = 0;

	for(int i = 0 ; i < m ; i++){
		if(!can(edge[i].u , edge[i].v))
			continue;

		res = edge[i].t;
	}

	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
