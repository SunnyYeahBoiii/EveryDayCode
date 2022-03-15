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
const int mod = 1e9 +7;
using namespace std;
void solve(){
    int m,n;
    int a[1000][1000],b[1000][1000];int res;
    cin >> m >> n;
    FOR(i,0,m-1)
        FOR(j,0,n-1) cin >> a[i][j];

    FOR(i,0,m-1) b[0][i]=a[0][i];

    FOR(i,0,n-1) b[i][0]=a[i][0];

    FOR(i,1,n-1)
        FOR(j,1,m-1)
            b[i][j]=min(min(b[i-1][j-1],b[i][j-1]),b[i-1][i])+1;

    res=b[0][0];
    FOR(i,0,m-1)
        FOR(j,0,n-1)
            if (res < b[i][j]) res=b[i][j];
    cout << res*res;
}
int main(){
    fast;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}