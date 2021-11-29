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
#define MAXN 100001
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
int dem(int x)
{
    map<int,int> ret;
    while (x != 1)
    {
        ret[spf[x]]++;
        x = x / spf[x];
    }
    return ret.size();
}
void solve() 
{
    int a,b,k,d1 = 0;
    cin >> a >> b >> k;
    FOR(i,a,b) {
        if (dem(i) == k) ++d1;
    }
    cout << d1 << '\n';
}
int main()
{
    fast;
    int t;
    cin >> t;
    sieve();
    while (t--) solve();
    return 0;
}
