#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int, int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e5+5;
int n;

void solve() {
    cin >> n;
    vector<ll> a;
    FOR(i,1,n) {
        ll x; cin >> x;
        if (x%2 == 0) a.pub(x);
    }
    vector<ll> luu;
    luu.pub(a[0]);
    FOR(i,1,a.size()-1) {
        if (luu.back() < a[i]) luu.pub(a[i]);
        else {
            int idx = lower_bound(luu.begin(),luu.end(),a[i])-luu.begin();
            luu[idx] = a[i];
        }
    }
    cout << luu.size();
}

int main(){
    fast;
    freopen("VIEXCURS.inp","r",stdin);
    freopen("VIEXCURS.out","w",stdout);
    solve();
}
