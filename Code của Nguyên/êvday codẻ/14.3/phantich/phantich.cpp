#include<bits/stdc++.h>
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define pub push_back
#define pob pop_back
#define ii  pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
#define fast {ios_base::sync_with_stdio(false);cin.tie(NULL);}
typedef unsigned long long int ull;
typedef long long ll;
const long N=1e5 + 5;
using namespace std;
void solve(){
    int n;
    int dp[N];
    cin >> n;
    dp[0] = 1;
    FOR(i,1,n)
        FOR(j,i,n)
            if ( j - i >= 0) dp[j] = dp[j] + dp[j-i];
    cout << dp[n];
}
int main(){
    fast;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}