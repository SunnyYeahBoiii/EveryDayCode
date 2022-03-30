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
    ull s,a,b,l;
    cin >> a >> b;
    s = pow(2,a);
    l = pow(2,a);
    for(ull i = a+1; i <= b; i++) {
        l = (l%127*2)%127;
        s = (s+l%127)%127; 
    }
    cout << s%127;
}
int main(){
    fast;
    solve();
    return 0;
}
