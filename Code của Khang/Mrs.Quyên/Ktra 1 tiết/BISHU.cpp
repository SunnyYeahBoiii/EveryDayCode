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
ll s[10005] = {0};
int main()
{
    fast;
    freopen("BISHU.inp","r",stdin);
    freopen("BISHU.out","w",stdout);
    int n,q,x;
    cin >> n;
    int a[n+1];
    FOR(i,1,n) cin >> a[i];
    sort(a+1,a+n+1);
    s[0] = 0;
    FOR(i,1,n) s[i] = s[i-1]+a[i]; 
    a[n+1] = 101;
    cin >> q;
    FOR(i,1,q) {
        cin >> x;
        FOR(j,1,n+1) {
            if (x < a[j]) {
                cout << j-1 << " " << s[j-1] << '\n'; 
                break;
            }
        }
    } 
    return 0;
}
