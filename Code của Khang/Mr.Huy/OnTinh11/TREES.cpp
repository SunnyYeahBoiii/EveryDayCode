#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a,b,c,t,l,r,k,m,p[1000005];
const int INF=1e9;
vector<int> dp(1000005,INF);
void solve(){
    dp[0]=-INF;
    ll ans=0;
    for(int i=0;i<k-1;i++){
        ll x=lower_bound(dp.begin(),dp.end(),p[i])-dp.begin();
        if(dp[x]>p[i]&&dp[x-1]<p[i]){
            dp[x]=p[i];
            ans=max(ans,x);
        }
    }
    int tmp=ans;
    for(int i=1;i<100005;i++) dp[i]=INF;
    dp[0]=-INF;
    ans=0;
    for(int i=k;i<n;i++){
        ll x=lower_bound(dp.begin(),dp.end(),p[i])-dp.begin();
        if(dp[x]>p[i]&&dp[x-1]<p[i]){
            dp[x]=p[i];
            ans=max(ans,x);
        }
    }
    cout<<n-tmp-ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("trees.inp","r",stdin);
    freopen("trees.out","w",stdout);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>p[i];
    solve();
    return 0;
}
