#include<bits/stdc++.h>
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define pub push_back
#define pob pop_back
#define ii  pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
typedef long long ll;
const long N=1e5 + 5;
using namespace std;
void solve(){
    long n,m; long a[N],b[N],c[N];
    cin >> n >> m;
    FOR(i, 0, n-1) cin >> a[i] ;
    FOR(i, 0 , n-1) cin >> b[i];
    FOR(i, 0, n-1) c[i] = b[i] - a[i];

    long i = 0;
    long res = m;
    while (( m <= c[i] ) && ( i <= n-1))
    {
        res += a[i];
        i += 1;
    }
    cout<<res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen(".inp","r",stdin);'
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}