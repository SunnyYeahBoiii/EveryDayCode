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
    int n,d = 0;
    cin >> n;
    char c;
    string s;
    map<string,int> mp;
    FOR(i,0,n-1) {
        cin >> s;
        if (mp[s]) {
            cout << "NO\n";
            cout << i+1 << '\n';
            return 0;
        }
        mp[s]++;
        if (i > 0) if (c != s[0]) {
            cout << "NO\n";
            cout << i+1 << '\n';
            return 0;
        }
        c = s[s.size()-1];
    }
    cout << "YES\n";
    return 0;
}
