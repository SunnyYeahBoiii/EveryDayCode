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
#define INF LLONG_MAX

const int MOD = 1000000000 + 7;

struct segtree{

    vector<int> tree , lazy;
    int n , size;

    void init(int a){
        n = a;
        size = n*4+1;
        tree.resize(size , 1);
        lazy.resize(size , 1);
    }

    void build(){
        build(1 , 0 , n-1);
    }

    void down(int vt){
        int x = lazy[vt];
        lazy[vt] = 1;

        if(x == -1)
            return;

        tree[vt*2] = ((tree[vt*2] % MOD) * (x % MOD)) % MOD;
        lazy[vt*2] = (lazy[vt*2] * x) % MOD;

        tree[vt*2+1] = ((tree[vt*2+1] % MOD) * (x % MOD)) % MOD;
        lazy[vt*2+1] = (lazy[vt*2+1] * x) % MOD;
    }

    void build(int vt , int l , int r){
        if(l == r){
            tree[vt] = 1;
            lazy[vt] = 1;
            return;
        }

        int mid = (l + r) / 2;

        build(vt*2 , l , mid);
        build(vt*2+1 , mid+1 , r);

        tree[vt] = (tree[vt*2] + tree[vt*2+1]) % MOD;
    }

    void update(int l , int r , int x){
        update(1 , 0 , n-1 , l , r-1 , x);
    }

    void update(int vt , int l , int r , int u , int v , int x){
        if(l > v || r < u)
            return;
 
        if(u <= l && r <= v){
            tree[vt] = ((tree[vt] % MOD)*(x % MOD)) % MOD;
            lazy[vt] = (lazy[vt] * x) % MOD;
            return;
        }

        down(vt);

        int mid = (l + r) / 2;

        update(vt*2 , l , mid , u , v, x);
        update(vt*2+1 , mid+1 , r , u , v,  x);

        tree[vt] = (tree[vt*2] + tree[vt*2+1]) % MOD;
    }

    int get(int l , int r){
        return get(1 , 0 , n-1 , l , r-1);
    }

    int get(int vt , int l , int r , int u , int v){
        if(l > v || r < u)
            return 0;

        if(u <= l && r <= v)
            return tree[vt];

        down(vt);

        int mid = (l + r) / 2;

        return (get(vt*2 , l , mid , u , v) + get(vt*2+1 , mid+1 , r , u , v)) % MOD;
    }

    void print(int vt , int l , int r){
        cout << l << " " << r << " " << tree[vt] << " " << lazy[vt] << endl;

        if(l == r)
            return;

        int mid = (l + r) / 2;

        print(vt*2 , l , mid);
        print(vt*2+1 , mid+1 , r);
    }

    void print(){
        print(1 , 0 , n-1);
    }

};

void solve(){

    int n , m;
    cin >> n >> m;

    segtree seg;
    seg.init(n);
    seg.build();

    int q , l , r , x;

    for(int i = 0 ; i < m ; i++){
        cin >> q;
        if(q == 1){
            cin >> l >> r >> x;
            seg.update(l , r , x);
            //seg.print();
            //cout << endl;
        }else{
            cin >> l >> r;
            cout << seg.get(l , r) % MOD << endl;
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