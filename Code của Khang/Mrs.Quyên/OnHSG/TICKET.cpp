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
int n;
ll a,d,maxn = INT_MAX;
void solve(){
    cin >> n;
    while (a != 1) {
        cin >> a,n--;
        if (!a) d++;
    }
    if (d >= 2) maxn = min(maxn,d);
    FOR(i,1,n) {
        cin >> a;
        if (!a) d++;
        if (a && d >= 2) {
            maxn = min(maxn,d);
            d = 0;
        }
        if (a) d = 0;
    }
    if (a == 0) maxn = min(maxn,d);
    cout << maxn;
}
int main(){
    fast;
    // freopen("TICKET.inp","r",stdin);
    // freopen("TICKET.out","w",stdout);
    solve();
    return 0;
}
