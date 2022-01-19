//////////////////////////////////////////////////////////////
//                                                          //
//                      Cre:Sunny                           //
//           (a.k.a Minh Phuong Vu)                         //
//                                                          //
//                                                          //
//////////////////////////////////////////////////////////////
#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define in "abc.inp"
#define out "abc.out"
#define IO freopen(in,"r",stdin);freopen(out,"w",stdout);
const int mod = 10e5;
using ll = long long;
#define pb(n) push_back(n)
#define ppb() pop_back()
#define p(n) push(n)
#define pp() pop()
#define mem(a,b) memset(a , b , sizeof(a))
template <class type>void swapa(type &a, type &b){type t = a; a = b; b = t;}
template <class type, class type1>long long powa(type a, type1 b){return round(exp(b*log(a)));}
template <class type>long long sqrta(type a, type b){return round(exp(((double)1/b)*log(a)));}
template <class type>long long gcda(type a, type b){long long r;while(b > 0){r=a%b;a=b;b=r;}return a;}
template <class type>long long lcma(type a, type b){return a/gcd(a,b)*b;}

struct point{
    long long x,y;
};

map<pair<long long , long long> , long long> c1;

vector<point> dq(int i , int last , point a[35]){
    vector<point> res;
    c1.clear();
    if(i > last) return res;
    res.pb(a[i]);
    c1[{a[i].x , a[i].y}] = 1;
    int n;
    point t,r;
    for(int j = i+1 ; j <= last ; ++j){
        n = res.size();
        t.x = a[j].x; t.y = a[j].y;
        for(int l = 0 ; l < n ; ++l){
            r.x = t.x + res[l].x;
            r.y = t.y + res[l].y;
            res.pb(r);
            c1[{r.x , r.y}]++;
        }
        c1[{t.x , t.y}] +=1;
        res.pb(t);
    }
    return res;
}

long long cnt(vector<point> a , vector<point> b , point s){
    long long res = 0;
    point t;
    for(int i = 0 ; i < a.size() ; ++i){
        t.x = s.x - a[i].x ; t.y = s.y - a[i].y;
        res += c1[{t.x , t.y}];
    }
    for(int i = 0 ; i < a.size() ; i++) if(a[i].x == s.x && a[i].y == s.y) res++;
    for(int i = 0 ; i < b.size() ; i++) if(b[i].x == s.x && b[i].y == s.y) res++;
    if(s.x == 0 && s.y == 0) res++;
    return res;
}

int main(){
    int n;
    cin >> n;
    long long  u , v;
    point p[n+5];
    for (int i = 1 ; i <= n; ++i)
    {
        cin >> p[i].x >> p[i].y;
    }
    cin >> u >> v;
    vector<point> x1,x2;
    x1 = dq(1 , n/2 , p);
    x2 = dq(n/2+1 , n , p);
    point s;
    s.x = u;
    s.y = v;
    //cout <<endl;
    //for(int i = 0 ; i < x2.size() ; i++) cout << x2[i].x << " " << x2[i].y << endl;
    //cout << endl;
    unsigned long long res = cnt(x1 , x2 , s);
    cout << res << endl;
    return 0;
}
