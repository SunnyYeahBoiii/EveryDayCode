#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
ll b,b1,d,d1,a,a1,c,c1,m,m1,n,n1,kq;
void solve(){
    cin >> a >> a1 >> c >> c1 >> m >> m1 >> n >> n1;
    b = max(a,c); b1 = max(a1,c1);
    d = min(a,c); d1 = min(a1,c1);
    if (b > m && m > d) if (b1 > m1 && m1 > d1) kq++;
    if (b > n && n > d) if (b1 > n1 && n1 > d1) kq++;
    cout << kq;
}
int main(){
    fast;
    // freopen("INSIDE.inp","r",stdin);
    // freopen("INSIDE.out","w",stdout);
    solve();
    return 0;
}
