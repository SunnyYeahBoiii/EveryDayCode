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

struct edge{
	int u , v , c;
};

struct info{
	int first , second , vt;
};

int n;
vector<edge> all;
int par[100005];
info a[100005];

void input(){
	cin >> n;
	int x, y;
	for(int i = 0 ; i < n ; i++){
		cin >> x >> y;
		a[i].first = x;
		a[i].second= y;
		a[i].vt = i+1;
	}
}

int root(int u){
	return (par[u] < 0) ? u : par[u] = root(par[u]);
}

bool can(int x , int y){
	x = root(x) , y = root(y);

	if(x == y)
		return false;

	if(par[x] > par[y])
		swap(x , y);

	par[x] += par[y];
	par[y] = x;
	return true;
}

bool cx(info a , info b){
	return a.first < b.first;
}

bool cy( info a , info b){
	return a.second < b.second;
}

int value(info a , info b){
	return min(abs(a.first - b.first) , abs(a.second - b.second));
}

void rem(){
	for(int i = 0 ; i < n-1 ; i++)
		all.push_back({a[i].vt , a[i+1].vt , value(a[i] , a[i+1])});
}

void solve(){
	input();	
	sort(a , a+n , cx);
	rem();
	sort(a , a+n , cy);
	rem();

	sort(all.begin() , all.end() , [](edge a , edge b){
				return a.c < b.c;
			});
	memset(par, -1 , sizeof(par));
	int res = 0;

	for(int i = 0 ; i < all.size() ; i++){
		int x = all[i].u , y = all[i].v;
		//cout << x << " " << y << " " << all[i].c << endl;
		if(!can(x , y))
			continue;

		res += all[i].c;

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
