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

int par[10001];
struct edge{
	int u , v , c;
};
edge a[15001];
bool cmp(edge a , edge b){
	return a.c < b.c;
}

int  root(int x){
	return (par[x] < 0) ? x : (par[x] = root(par[x]));
}

bool dsu(int u , int v){
	u = root(u) , v = root(v);
	if(u == v)
		return false;
	if(par[u] > par[v])
		swap(u , v);
	par[u] += par[v];
	par[v] = u;
	return true;
}

void solve(){
	int n , m;
	cin >> n >> m;
	memset(par , -1 , sizeof(par));
	for(int i = 0 ; i < m ; i++){
		cin >> a[i].u >> a[i].v >> a[i].c; 
	}	
	sort(a , a+m , cmp);
	int res = 0;
	for(int i = 0 ; i < m ; i++){
		if(!dsu(a[i].u , a[i].v))
			continue;

		res += a[i].c;
	}
	cout <<res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
