/*main idea: bignum & dp
- generate string array (dp)
- zero and first step are 1 way, second step is 2 ways
- then the third and more we will perform this fomula: dp[i] = dp[i-1]+dp[i-2]
+ sum of previous ways + sum of two last ways (use bignum to change)*/
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
string add(string a, string b)
{
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/10;
        tmp=tmp%10;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}
int main() 
{
    fast;
    freopen("STAIRS1.inp","r",stdin);
    freopen("STAIRS1.out","w",stdout);
    int n;
    string dp[110];
    dp[0] = '1';
    dp[1] = '1';
    dp[2] = '2';
    FOR(i,3,100) dp[i] = add(dp[i-1],dp[i-2]);
    while (cin >> n) {
        cout << dp[n] << '\n';
    }
    return 0;
}
