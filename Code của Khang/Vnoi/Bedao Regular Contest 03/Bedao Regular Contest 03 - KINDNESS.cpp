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
#define MAX_INDEX 51
#define MAX_SUM 2505
int main()
{
    fast;
    string s;
    cin >> s;
    ll n = s.size(),d = 0,ans = 0;
    map<char,ll> mp;
    FOR(i,0,n-1) mp[s[i]]++;
    for(auto &p : mp) {
        d += p.second;
        ans += (n-d)*p.second;
    }
    cout << min(ans+1,n*(n-1)/2);
    return 0;
}
