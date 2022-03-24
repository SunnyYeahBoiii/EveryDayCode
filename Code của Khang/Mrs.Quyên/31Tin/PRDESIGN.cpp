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
    vector<ll> a(n),b(n);
    FOR(i,0,n-1) {
        int t; cin >> t;
        if (t == 0) cin >> a[i];
        else cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll max1 = 0,max2 = 0;
    FOR(i,1,a.size()-1) max1 = max(max1,a[i]-a[i-1]); 
    FOR(i,1,b.size()-1) max2 = max(max2,b[i]-b[i-1]);
    cout << min(max1,max2);
}
int main()
{
    fast;
    // freopen("PRDESIGN.inp","r",stdin);
    // freopen("PRDESIGNs.out","w",stdout);
    solve();
    return 0;
}   