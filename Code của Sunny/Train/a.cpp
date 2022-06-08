// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii
/*
Code Ideal: I'm too lazy for something like this .__.
*/
#include "bits/stdc++.h"
using namespace std;
#define NAME "a"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX
struct info{
    int w , h;
};
bool cmp(pair<int , int> a , pair<int , int> b){
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
vector<info> a;
vector<pair<int , int> > b;
vector<int> newidx;
int n;
struct seg{
    vector<int> tree;
    int size , n;
    void init(int s){
        n = s;
        size = 4*n+1;
        tree.resize(size , 0);
    }
    int get(int x){
        if(x < 0)
            return 0;
        //cout << x << endl;
        return get(1 , 0 , n-1 , x);
    }
    int get(int vt , int l , int r , int x){
        if(r < x)
            return 0;
        if(l >= x){
            return tree[vt];
        }
        int mid = (l + r) / 2;
        return max(get(vt*2 , l , mid , x) , get(vt*2+1 ,mid+1 , r , x));
    }
    void update(int x , int val){
        update(1 , 0 , n-1 , x , val);
    }
    void update(int vt , int l , int r , int x, int val){
        if(l > x || r < x)
            return;
        if(l == r && l == x){
            tree[vt] = val;
            return;
        }
        int mid = (l + r) / 2;
        if(x <= mid)
            update(vt*2 , l , mid , x , val);
        else update(vt*2+1 , mid+1 , r , x , val);
        tree[vt] = max(tree[vt*2] , tree[vt*2+1]);
    }
    void print(){
        print(1 , 0 , n-1);
    }
    void print(int vt , int l , int r){
        //cout << vt << " " << l << " " << r  << " " << tree[vt] << endl;
        if(l == r){
            cout << tree[vt] << " ";
            return;
        }
        int mid = (l + r) / 2;
        print(vt*2 , l , mid); print(vt*2+1 , mid+1 , r);
    }
};
void solve(){
    cin >> n;
    a.resize(n);b.resize(n);newidx.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].w >> a[i].h;
    }
    //reverse(a.begin() , a.end());
    for(int i = 0 ; i < n ; i++){
        b[i].first = a[i].w;
        b[i].second = i;
    }
    sort(b.begin() , b.end() , cmp);
    for(int i = 0 ; i < n ; i++)
        newidx[b[i].second] = i;

    int res = 0;
    seg segg;
    segg.init(n);
    segg.update(newidx[0] , a[0].h);
    for(int i = 1 ; i < n ; i++){
        int x = segg.get(newidx[i] + 1);
        res = max(res , x + a[i].h);
        segg.update(newidx[i] , x + a[i].h);
    }
    cout << res << endl;
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
// Đang nghĩ về code


