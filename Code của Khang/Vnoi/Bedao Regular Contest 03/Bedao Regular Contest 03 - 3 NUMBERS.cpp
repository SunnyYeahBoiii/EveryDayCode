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
#define MAXN 100001
void solve() 
{
    int n,d = 0;
    cin >> n;
    FOR(a,1,n)
    FOR(b,1,n)
    FOR(c,1,n) {
        if (a*b*c <= n) ++d;
    }
    cout << d;
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
