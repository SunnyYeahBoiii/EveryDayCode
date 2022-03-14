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
    int k,n;
    cin >> n >> k;
    int c[k+1] = {0};
    c[0] = 1;
    FOR(i,1,n) {
        FOD(j,min(i,k),1) c[j] = (c[j]+c[j-1])%(1000000000+7);
    }
    cout << c[k];
}
int main(){
    fast;
    // freopen("TOHOP.inp","r",stdin);
    // freopen("TOHOP.out","w",stdout);
    solve();
    return 0;
}
