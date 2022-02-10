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

struct segtree{

    vector<int> tree , lazy;
    int n , size;

    void init(int a){
        n = a;
        size = n*4+1;
        tree.resize(size , 0);
        lazy.resize(size , 0);
    }

    void build(vector<int>& a){
        build(1 , 0 , n-1 , a);
    }

    void down(int vt){
        int x = lazy[vt];
        lazy[vt] = 0;

        tree[vt*2] += x;
        lazy[vt*2] += x;

        tree[vt*2+1] += x;
        lazy[vt*2+1] += x;
    }

    void build(int vt , int l , int r , vector<int>& a){
        if(l == r){
            /*tree[vt] = value*/;
            return;
        }

        int mid = (l + r) / 2;

        build(vt*2 , l , mid , a);
        build(vt*2+1 , mid+1 , r , a);

        tree[vt] =  min(tree[vt*2] , tree[vt*2+1]);
    }

    void update(int l , int r , int x){
        update(1 , 0 , n-1 , l , r-1 , x);
    }

    void update(int vt , int l , int r , int u , int v , int x){
        if(l > v || r < u)
            return;

        if(u <= l && r <= v){
            tree[vt] += x;
            lazy[vt] += x;
            return;
        }

        down(vt);

        int mid = (l + r) / 2;

        update(vt*2 , l , mid , u , v, x);
        update(vt*2+1 , mid+1 , r , u , v,  x);

        tree[vt] = min(tree[vt*2] , tree[vt*2+1]);
    }

    int get(int l , int r){
        return get(1 , 0 , n-1 , l , r-1);
    }

    int get(int vt , int l , int r , int u , int v){
        if(l > v || r < u)
            return INF;

        if(u <= l && r <= v)
            return tree[vt];

        down(vt);

        int mid = (l + r) / 2;

        return min(get(vt*2 , l , mid , u , v) , get(vt*2+1 , mid+1 , r , u , v));
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

    int q , l , r , x;

    for(int i = 0 ; i < m ; i++){
        cin >> q;
        if(q == 1){
            cin >> l >> r >> x;
            seg.update(l , r , x);
            //seg.print();
        }else{
            cin >> l >> r;
            cout << seg.get(l , r) << endl;
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