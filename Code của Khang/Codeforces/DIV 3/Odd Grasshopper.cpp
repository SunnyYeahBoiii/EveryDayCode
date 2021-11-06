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
void solve()
{
    ll x,n;cin>>x>>n;
   if(n==0){
       cout<<x<<endl;return;
   }
   ll k=n-1;
   ll c=k/4;
   ll rem=k%4;
   ll ans=x;
   if(x%2==0) {
       ans-=1;
       ans-=(c*4);
       if(rem==1) ans+=n;
       else if(rem==2) ans+=(n+n-1);
       else if(rem==3) ans+=(n-2+n-1-n);
   }
   else {
       ans+=1;
       ans+=(c*4); 
       if(rem==1) ans-=n;
       else if(rem==2) ans-=(n+n-1);
       else if(rem==3) ans-=(n-2+n-1-n);
   }
   cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
