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
const int N = 1e5+5;
ll a[N], s[N], F0[N], F1[N], k, res;
void solve(){
    int n;
    cin >> n;
    FOR(i,1,n) cin >> a[i];

    k = 1;
	s[1] = a[n];
	F0[n] = 1;
	FOD(i,n-1,1) {
		int j = k;
		while (j > 0 && a[i] >= s[j]) j--;
		if (j == k) s[++k] = 0;
		s[j+1] = max(s[j+1], a[i]);
		F0[i] = j+1;
	}

	k = 1;
    memset(s,0,sizeof(s));
	s[1] = a[n];
	F1[n] = 1;
	FOD(i,n-1,1) {
		int j = k;
		while (j > 0 && a[i] <= s[j]) j--;
		if (j == k) s[++k] = 1e9+7;
		s[j+1] = min(s[j+1], a[i]);
		F1[i] = j+1;
	}
    FOR(i,1,n) res = max(res,F0[i]+F1[i]-1);
    cout << res;
}
int main(){
    fast;
    // freopen("BEADS.inp","r",stdin);
    // freopen("BEADS.out","w",stdout);
    solve();
    return 0;
}
