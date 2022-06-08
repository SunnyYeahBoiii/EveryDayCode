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
void solve(){
    int n;
    cin >> n;
    ll f[n],d[n];
    f[1] = 1;
    f[2] = 2;
    FOR(i,3,n) f[i] = f[i-2]+f[i-1];
    d[1] = 0;
    FOR(i,2,n) d[i] = d[i-1]+f[i-1];
    cout << d[n];
}
int main()
{
    fast;
    // freopen("SHOOT.inp","r",stdin);
    // freopen("SHOOT.out","w",stdout);
    solve();
    return 0;
}   