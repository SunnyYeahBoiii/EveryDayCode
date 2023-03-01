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
int n;
int a;

void solve() {
    cin >> n;
    int d = 0;
    map<int,int> mp;
    FOR(i,1,n) cin >> a, mp[a]++;
    for(auto &p : mp) if (p.second >= 2) d++;
    cout << d;
}

int main(){
    fast;
    freopen("FNUMGAME.inp","r",stdin);
    freopen("FNUMGAME.out","w",stdout);
    solve();
}

