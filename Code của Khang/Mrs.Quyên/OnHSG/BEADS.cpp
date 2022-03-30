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
    deque<ll> dp;
    ll maxn = 0,max1 = 0;
    FOR(i,0,n-1) {
        ll x; cin >> x;
        dp.push_back(x);
        max1 = max(max1,x);
    }
    set<ll> a;
    if (dp.front() < dp.back()) {
        maxn = dp.front();
        dp.pop_front();
    }
    else {
        maxn = dp.back();
        dp.pop_back();
    }
    a.insert(maxn);
    while (dp.size()) {
        if (maxn <= dp.back() && maxn >= dp.front()) {
            maxn = dp.back();
            dp.pop_back();
        }
        else if (maxn <= dp.front() && dp.back() <= maxn) {
            maxn = dp.front();
            dp.pop_front();
        } else if (maxn > max1) break;
        else if (maxn > dp.front() && maxn > dp.back()) dp.pop_back(),dp.pop_front();
        a.insert(maxn);
    }
    //if (a.size() > 1) cout << a.size();
    //else cout << 1;
    for(auto &p : a) cout << p << " ";
}
int main(){
    fast;
    // freopen("BEADS.inp","r",stdin);
    // freopen("BEADS.out","w",stdout);
    solve();
    return 0;
}
