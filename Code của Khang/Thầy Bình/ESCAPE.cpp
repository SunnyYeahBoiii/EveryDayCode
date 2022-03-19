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
#define MAX_INDEX 51
#define INF 100001
int maxn = 0,w[20],n;
vector<int> res;
bool ktra(){
    if (!res.size()) return true;
    auto a = res;
    while (true) {
        int s = 0;
        bool check = 0;
        FOR(i,0,res.size()-1) 
            if (a[i]) {
                s += a[i]%10;
                a[i] /= 10;
                check = 1;
            }
        if (s > 9) return false;
        if (!check) break;
    }
    return true;
}
void ins() {
    maxn = max(maxn,(int)res.size());
}
void try1(int k) {
    if (k == n) {ins();return;}
    try1(k+1);
    res.pub(w[k]);
    if (ktra()) try1(k+1);
    res.pob();
}
void solve(){
    cin >> n;
    FOR(i,0,n-1) cin >> w[i];
    try1(0);
    cout << maxn;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}   
