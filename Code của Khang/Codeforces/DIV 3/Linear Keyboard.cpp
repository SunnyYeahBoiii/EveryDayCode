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
    int p = 0;
    string s,s1;
    cin >> s >> s1;
    map<char,int> mp;
    FOR(i,0,s.size()-1) mp[s[i]] = i+1;
    FOR(i,1,s1.size()-1) 
        p += abs(mp[s1[i]]-mp[s1[i-1]]);
    cout << p << '\n';
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
