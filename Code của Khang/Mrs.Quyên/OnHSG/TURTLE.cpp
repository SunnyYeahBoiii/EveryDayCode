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
    ll a,b,s;
    cin >> a >> b >> s;
    if ((a+b)&1 && s >= (a+b) && s&1) {
        cout << "Yes" << '\n';
    }
    else if ((a+b)%2 == 0 && s >= (a+b) && s%2 == 0) 
        cout << "Yes" << '\n';
    else cout << "No" << '\n'; 
}
int main(){
    fast;
    // freopen("TURTLE.inp","r",stdin);
    // freopen("TURTLE.out","w",stdout);
    solve();
    return 0;
}