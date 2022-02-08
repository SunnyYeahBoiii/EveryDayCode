// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

struct segtree{

	vector<int> tree , lazy;
	int n , size;

	void init(int s){
		n = s;
		size = s*4+1;
		tree.resize(size);
		lazy.resize(size);
	}

	void down(int vt){
		int x = lazy[vt];
		lazy[vt] = 0;

		tree[vt*2] = max(tree[vt*2] , x);
		lazy[vt*2] = max(lazy[vt*2] , x);

		tree[vt*2+1] = max(tree[vt*2+1] , x);
		lazy[vt*2+1] = max(lazy[vt*2+1] , x);
	}

	void update(int l , int r , int x){
		update(1 , 0 , n-1 , l , r-1 , x);
	}

	void update(int vt , int l , int r , int u , int v , int x){
		
		if(l > v || r < u)
			return;

		if(u <= l && r <= v){
			tree[vt] = max(tree[vt] , x);
			lazy[vt] = max(lazy[vt] , x);
			return;
		}

		int mid = (l + r) / 2;

		down(vt);

		update(vt*2 , l , mid , u , v , x);
		update(vt*2+1 , mid+1 , r , u , v ,x);

		tree[vt] = max(tree[vt*2] , tree[vt*2+1]);
	}

	int get(int x){
		return get(1 , 0 , n-1 , x);
	}

	int get(int vt , int l , int r , int x){
		if(l > x || r < x)
			return 0;

		if(l == r && l == x)
			return tree[vt];

		int mid = (l + r) / 2;

		down(vt);

		if(l <= x && x <= mid)
			return get(vt*2, l , mid , x);
		else return get(vt*2+1 , mid+1 , r , x);
	}
};

void solve(){

	segtree seg;
	int n, m;
	cin >> n >> m;
	vector<int> a(n);

	seg.init(n);

	int q , l , r , x;

	for(int i = 0 ; i < n ; i ++){
		cin >> q;
		if(q == 1){
			cin >> l >> r >> x;
			seg.update(l , r , x);
		}else{
			cin >> x;
			cout << seg.get(x) <<  endl;;
		}
	}

}

int32_t main(){
	FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}