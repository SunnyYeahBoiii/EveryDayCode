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
const int mod = 1e9 +7;
using namespace std;
void solve(){
    int n,dp[N][N],k;
    cin >> n >> k;
    FOR (i,0,n){
        dp[i][0] = 1;
        dp[i][i] = 0;
        FOR(j,1,i-1) dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) & mod;   
    }
    cout << dp[n][k];
}
int main(){
    fast;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}