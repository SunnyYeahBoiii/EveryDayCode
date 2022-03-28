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
int a[25],x[25],n,d1 = 0,cnt = 0;
void thu1(int k) {
    FOR(i,0,1) {
        x[k] = i;
        if (x[k] == 1) d1++;
        if (k == n && d1 >= 2) {
            bool ok;
            FOR(j,1,n) if (x[j] == 1 && a[j]&1) {ok = false;break;}
            else if (x[j] == 1 && a[j]%2 == 0) {ok = true;break;}
            cnt++;
            FOR(j,1,n) {
                if (ok && x[j] == 1 && a[j]%2 == 0) ok = false;
                else if (!ok && x[j] == 1 && a[j]%2 != 0) ok = true;
                else if (ok && x[j] == 1 && a[j]%2 != 0) {cnt--;break;}
                else if (!ok && x[j] == 1 && a[j]%2 == 0) {cnt--;break;}
            }
            d1 = 0;
        } else thu1(k+1);
    }
}
void solve(){
    cin >> n;
    FOR(i,1,n) cin >> a[i];
    thu1(1);
    cout << cnt;
}
int main(){
    fast;
    // freopen("NUMBER.inp","r",stdin);
    // freopen("NUMBER.out","w",stdout);
    solve();
    return 0;
}
