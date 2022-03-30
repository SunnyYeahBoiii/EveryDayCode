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
    int n,k;
    cin >> n >> k;
    int a[n],d = 1,d1 = 1;
    FOR(i,0,n-1) cin >> a[i];
    FOR(i,1,k-2) {
        if (a[i] > a[i-1]) ++d;
        else d = 1;
    }
    FOR(i,k-1,n-1) {
        if (a[i] > a[i-1]) ++d1;
        else d1 = 1;
    }
    cout << (k-1-d)+(n-k-d1);
}
int main(){
    fast;
    solve();
    return 0;
}
