#include<bits/stdc++.h>
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define pub push_back
#define pob pop_back
#define ii  pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
#define fast {ios_base::sync_with_stdio(false);cin.tie(NULL);}
typedef unsigned long long int ull;
typedef long long ll;
const long N=1e5 + 5;
using namespace std;/*

struct info{
    int a , b;
};
bool cmp1(info& a , info& b){
    return a.a - a.b < b.a - b.b;
}
vector<info> a;
void solve(){
    int n;
    cin >> n;
    a.resize(n*2);
    FOR ( i , 0 , (n*2) - 1)
        cin >> a[i].a >> a[i].b;
    sort(a.begin() , a.end() , cmp1);
    int res = 0;
    FOR ( i , 0 , n-1)
        res += a[i].a;
    FOR ( i , 0 , (2*n -1) )
        res += a[i].b;
    cout << res << endl;
}*/
int main(){
    fast;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}