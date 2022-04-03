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
int n,a[50],x[50],minx = 1000;
map<int,int> mp;
void xl(){
    int s = 0,s1 = 0;
    FOR(i,1,n) {
        if (x[i]) s += a[i];
        else s1 += a[i];
    }
    if (abs(s-s1) <= minx) {
        minx = abs(s-s1);
        mp[minx]++;
    }
}
// bool ok(int k) {
//     int s = 0,s1 = 0;
//     FOR(i,1,k) {
//         if (x[i]) s += a[i];
//         else s1 += a[i];
//     }
//     if (abs(s-s1) <= minx) return true;
//     return false; 
// }
void thu(int k) {
    if (k > n) {xl();return;}
    FOR(i,0,1) {
        x[k] = i;
         thu(k+1);
    }
}
void solve(){
    cin >> n;
    FOR(i,1,n) cin >> a[i];
    thu(1);
    cout << minx << " " << mp[minx]/2;
}
int main()
{
    fast;
    // freopen("DGROUP.inp","r",stdin);
    // freopen("DGROUP.out","w",stdout);
    solve();
    return 0;
}   