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
    long n,m,k;
    cin>>n >> m >> k;
    long x = ceil (sqrt(k));
    FOR(i,1,x)
        if ( k/i + m == i ){
            cout << i + n;
            return;
        }
         else if ( k/i + n == i + m) {
            cout << i + m;
            return ;
        }
    cout << -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen(".inp","r",stdin);'
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}