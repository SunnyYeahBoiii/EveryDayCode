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
unsigned long long n;
using namespace std;
void solve(){
    int a,b,x,s;
    cin >> a >> b >> s;
    x = ceil(sqrt(s));
    FOR(i,1,x) {
        if (s/i + b == i + a) {
            cout << i + a;
            return;
        } else if (s/i + a == i + b) {
            cout << i + b;
            return;
        }
    } 
    cout << -1;
}
int main()
{
    fast;
    // freopen("GEOMETRY.inp","r",stdin);
    // freopen("GEOMETRY.out","w",stdout);
    solve();
    return 0;
}
