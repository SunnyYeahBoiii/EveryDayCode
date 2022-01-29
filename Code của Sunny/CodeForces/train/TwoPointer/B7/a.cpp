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

vector<int> a;
int n;

int gcd(int a , int b){
    int r;

    while(b > 0){
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

struct segtree{

    vector<int> seg;
    int size , n;

    void init(int arrsize){
        n = arrsize;
        size = n*4+1;
        seg.resize(size , 0); 
    }

    void build(int vt , int l , int r){
        if(l == r){
            seg[vt] = a[l];
            return;
        }

        int mid = (l + r) / 2;

        build(vt*2 , l , mid);
        build(vt*2+1 , mid+1 , r);

        seg[vt] = gcd(seg[vt*2] , seg[vt*2+1]);
    }

    void build(int n){
        build(1 , 0 , n-1);
    }

    int get(int vt , int l,  int r , int u , int v){
        if(l > v || r < u)
            return -1;

        if(u <= l && r <= v){
            //cout << l << " " << r << " " << seg[vt] << endl;
            return seg[vt];
        }
        int mid = (l + r) / 2;

        int a1 = get(vt*2 , l , mid , u , v);
        int a2 = get(vt*2+1 , mid+1 , r , u , v);

        //cout << l << " " << r << " ";

        if(a1 == -1){
            //cout << a2 << endl;
            return a2;
        }
        else if(a2 == -1){
            //cout << a1 << endl;
            return a1;

        }
        else{
            //cout << gcd(a2 , a1) << endl;
            return gcd(a2 , a1);
        }
    }

    int get(int l , int r){
        return get(1 , 0 , n-1 , l , r);
    }
};

void solve(){

    int n;
    cin >> n;
    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int l = 0 , cur = a[0];
    int res = INF;

    if(cur == 1){
        cout << 1 << endl;
        return;
    }

    segtree seg;
    seg.init(n);
    seg.build(n);

    
    for(int r = 1 ; r < n ; r++){
        cur = gcd(cur , a[r]);

        while(seg.get(l+1 , r) == 1){
            l++;
            cur = seg.get(l , r);
        }

        if(cur == 1){
            res = min(res , r-l+1);
        }
    }
    

    if(res == INF)
        cout << -1 << endl;
    else cout << res << endl;
    

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