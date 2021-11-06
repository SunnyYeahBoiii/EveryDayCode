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
int main()
{
    fast;
    freopen("SQROOT.inp","r",stdin);
    freopen("SQROOT.out","w",stdout);
    int n;
    ull s = 0;
    cin >> n;
    FOR(i,1,n) {
        if (ceil((double)sqrt(i*i)) == floor((double)sqrt(i*i))) s = (s+i*i%2021)%2021;
    }
    cout << s;
    return 0;
}