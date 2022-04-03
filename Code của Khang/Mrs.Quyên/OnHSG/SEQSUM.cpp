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
    ll n,k;
    cin >> n;
    ll s,l;
	k = n;
	n /= 2;
	s = k*(k+1)/2;
	l = n*(n+1);
    cout << l-(s-l);
}
int main(){
    fast;
    // freopen("SEQSUM.inp","r",stdin);
    // freopen("SEQSUM.out","w",stdout);
    solve();
    return 0;
}