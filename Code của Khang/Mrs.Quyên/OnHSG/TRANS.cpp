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
    int n,m;
    cin >> n >> m;
    int a[n],d = 0;
    FOR(i,0,n-1) cin >> a[i];
    sort(a,a+n);
    FOR(i,0,n-1) {
        if (a[i] <= m) m -= a[i],++d;
        else break;
    }
    cout << d;
}
int main(){
    fast;
    solve();
    return 0;
}
