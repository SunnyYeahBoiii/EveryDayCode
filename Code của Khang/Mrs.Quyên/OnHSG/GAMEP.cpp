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
    int a[n],maxn = 0,d;
    map<int,int> mp;
    FOR(i,0,n-1) cin >> a[i],mp[a[i]]++;
    for(auto &p : mp) 
        if (p.first*p.second > maxn) {
            maxn = p.first*p.second;
            d = p.second;
        } 
        else if (p.first*p.second == maxn) {
            d = min(p.second,maxn/d);
        }
    cout << d << " " << maxn/d;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}   
