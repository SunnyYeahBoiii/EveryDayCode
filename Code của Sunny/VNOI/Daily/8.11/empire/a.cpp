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
	int x , y , z , vt;
};

struct edge{
	int l , j , c;
};

info a[100001];
int n;
int par[100001];
vector<edge> all;

bool cmx(info a , info b){
	return a.x< b.x;
}

bool cmy(info a , info b){
	return a.y < b.y;
}

bool cmz(info a, info b){
	return a.z < b.z;
}

bool cmo(edge a , edge b){
	return a.c < b.c;
}

int root(int x){
	return par[x] < 0 ? x : par[x] = root(par[x]);
}

bool can(int x , int y){
	x = root(x); y = root(y);
	if(x == y)
		return false;

	if(par[x] > par[y])
		swap(x , y);
	par[x] += par[y];
	par[y] = x;
	return true;
}

void input(){
	memset(par , -1 , sizeof(par));
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].x >> a[i].y >> a[i].z;
		a[i].vt = i;
	}	
}

int mina(info a , info b){
	return min(abs(a.x - b.x) , min(abs(a.y - b.y) , abs(a.z - b.z)));
}

int rem(){
	int res = 0;
	
	for(int i = 0 ; i < n-1 ; i++){
			all.push_back({a[i].vt , a[i+1].vt , mina(a[i] , a[i+1])});
	}
	return res;
}

void solve(){
	input();
	sort(a , a + n , cmx);
	rem();
	sort(a , a+n , cmy);
	rem();
	sort(a , a+n , cmz);
	rem();
	
	sort(all.begin() , all.end() , cmo);

	int res = 0;

	for(int i = 0 ; i < all.size() ; i++){
		int u = all[i].l , v = all[i].j;
	
		if(!can(u , v))
			continue;

		res += all[i].c;
	}

	cout << res << endl;
	/*
	for(int i = 0 ; i < all.size() ; i++)
		cout << all[i].l << " " <<all[i].j << " " << all[i].c << endl;
	*/
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
