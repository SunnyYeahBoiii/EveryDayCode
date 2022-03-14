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
    int dp[105] = {0};
    dp[0] = 1;
    FOR(i,1,100) {
        FOR(j,1,100)
            if (j-i >= 0) dp[j] = dp[j]+dp[j-i];
    }
    cout << dp[n];
}
int main(){
    fast;
    // freopen("PHANTICH.inp","r",stdin);
    // freopen("PHANTICH.out","w",stdout);
    solve();
    return 0;
}
