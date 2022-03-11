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
    long n;
    long a[N],b[N];
    cin>>n;
    FOR(i,1,n) cin>>a[i];
    FOR(i,1,n) cin>>b[i];
    sort(a + 1,a + n + 1);
    sort(b + 1,b + n + 1);
    long res = 1e9;
    FOR(i,1,n) {
        int j = lower_bound(b + 1, b + n + 1, a[i]) - b;
        if (j != n + 1) {
            res = min(abs(b[j] - a[i]), res);
            if (j >= 2)
                res = min(res, abs(b[j - 1] - a[i]));
        }
    }
    cout<<res<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("rbpoint2.inp","r",stdin);
    // freopen("rbpoint2.out","w",stdout);
    solve();  
    return 0;
}
