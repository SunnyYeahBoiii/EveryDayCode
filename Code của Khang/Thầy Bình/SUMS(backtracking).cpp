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
int maxn = 0,x[40],n;
ll s,a[40];
map<int,int> mp;
void xl2(){
    int g = 0;
    FOR(i,n/2+1,n) g += a[i]*x[i];
    if (mp.find(s-g) != mp.end()) maxn += mp[s-g];
}
void try2(int k) {
    if (k > n) {xl2();return;}
    FOR(i,0,1) {
        x[k] = i;
        try2(k+1);
    }
}
void xl1(){
    int t = 0;
    FOR(i,1,n/2) t += a[i]*x[i];
    mp[t]++;
}
void try1(int k) {
    if (k > n/2) {xl1();return;}
    FOR(i,0,1) {
        x[k] = i;
        try1(k+1);
    }
}
void solve(){
    cin >> n >> s;
    FOR(i,1,n) cin >> a[i];
    try1(1);
    try2(n/2+1);
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
