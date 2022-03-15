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

vector<int> a;
struct segtree{

    vector<int> tree , lazy;
    int n , size;

    void init(int a){
        n = a;
        size = n*4+1;
        tree.resize(size);
        lazy.resize(size);
    }

    void build(){
        build(1 , 0 , n-1);
    }

    void down(int vt , int l , int r){
        int x = lazy[vt];
        lazy[vt] = 0;
        int mid = (l + r) / 2;
        tree[vt*2] = x * (mid - l + 1);
        lazy[vt*2] = x;

        tree[vt*2+1] = x * (r - mid + 1);
        lazy[vt*2+1] = x;
    }

    void build(int vt , int l , int r){
        if(l == r){
            tree[vt] = a[l];
            return;
        }

        int mid = (l + r) / 2;

        build(vt*2 , l , mid);
        build(vt*2+1 , mid+1 , r);

        tree[vt] =  tree[vt*2] + tree[vt*2+1];
    }

    void update(int l , int r , int x){
        update(1 , 0 , n-1 , l , r , x);
    }

    void update(int vt , int l , int r , int u , int v , int x){
        if(l > v || r < u)
            return;

        if(u <= l && r <= v){
            tree[vt] = x * (r - l + 1);
            lazy[vt] += x;
            return;
        }

        down(vt , l , r);

        int mid = (l + r) / 2;

        update(vt*2 , l , mid , u , v, x);
        update(vt*2+1 , mid+1 , r , u , v,  x);

        tree[vt] = tree[vt*2] + tree[vt*2+1];
    }

    int get(int l , int r){
        return get(1 , 0 , n-1 , l , r);
    }

    int get(int vt , int l , int r , int u , int v){
        if(l > v || r < u)
            return 0;

        if(u <= l && r <= v)
            return tree[vt];

        down(vt , l , r);

        int mid = (l + r) / 2;

        return get(vt*2 , l , mid , u , v) + get(vt*2+1 , mid+1 , r , u , v);
    }

};

void solve(){

    int n;
    cin >> n;
    a.resize(n);

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