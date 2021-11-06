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
void solve()
{
    int n,maxn;
    cin >> n;
    int a[n];
    FOR(i,0,n-1) cin >> a[i];
    if (n == 1) {
        cout << a[0] << '\n';
        return;
    }
    sort(a,a+n,greater<int>());
    maxn = a[n-1];
    FOR(i,0,n-2) maxn = max(maxn,max(a[n-1],a[i]-a[i+1]));
    cout << maxn << '\n';
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
