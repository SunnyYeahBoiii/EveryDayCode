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
    int size , n;

    void init(int s){
        n = s;
        size = 4*n+1;
        tree.resize(size , 0);
        lazy.resize(size , 0);
    }   

    void down(int vt){
        int x = lazy[vt];
        lazy[vt] = 0;

        tree[vt*2] += x;
        lazy[vt*2] += x;

        tree[vt*2+1] += x;
        lazy[vt*2+1] += x;
    }

    void update(int vt , int l , int r , int u , int v , int x){
        if(l > v || r < u)
            return;

        if(u <= l && r <= v){
            tree[vt] += x;
            lazy[vt] += x;
            return;
        }

        int mid = (l + r) / 2;

        update(vt*2 , l , mid , u , v , x);
        update(vt*2+1 , mid+1 , r,  u , v , x);

        tree[vt] = tree[vt*2] + tree[vt*2+1];
    }

    void update(int l , int r , int x){
        update(1 , 0 , n-1 , l , r-1 , x);
    }

    int get(int vt , int l , int r , int x){
        if(l == r && l == x)
            return tree[vt];

        int mid = (l + r) / 2;

        down(vt);

        if(l <= x && x <= mid)
            return get(vt*2 , l , mid , x);
        else return get(vt*2+1 , mid+1 , r , x);
    }

    int get(int x){
        return get(1 , 0 , n-1 , x);
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

int n , m;
vector<int> a;

void solve(){

    cin >> n >> m;

    a.resize(n);

    segtree seg;
    seg.init(n);

    int q , x , l , r;

    for(int i = 0 ; i < m ; i++){
        cin >> q;
        if(q == 1){
            cin >> l >> r >> x;
            seg.update(l , r , x);
            //seg.print();
            //cout << endl;
        }else{
            cin >> x;
            cout << seg.get(x) << endl;
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