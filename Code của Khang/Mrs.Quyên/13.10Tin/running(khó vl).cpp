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
int main()
{
    fast;
    // freopen("running.inp","r",stdin);
    // freopen("running.out","w",stdout);
    int n,res = 0;
    cin >> n;
    int a[n];
    FOR(i,1,n) cin >> a[i];
    sort(a + 1, a + 1 + n);
    for (int x = 1; x < n; x ++)
    {
        int z1 = x + 1;
        int z2 = x + 1;
        for (int y = x + 1; y < n; y ++) /*2 pointers, bs*/
        {
            int delta = a[y] - a[x];
            while (z1 <= n && a[z1] - a[y] < delta) z1 ++;
            while (z2 <= n && a[z2] - a[y] <= 2 * delta) z2 ++;
            res += (z2 - z1);
        }
    }
    cout << res;
    return 0;
}
