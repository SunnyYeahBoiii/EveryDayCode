/*
main idea: bignum & dp
- generate string array (dp)
- if a[i] = 0 then don't receive otherwise dp[i] = 1
- do this fomula: dp[i] = dp[i-1]+dp[i-2] ( use bignum )
*/
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
    freopen("STAIRS2.inp","r",stdin);
    freopen("STAIRS2.out","w",stdout);
    int n;
    cin >> n;
    string dp[110];
    int a[n];
    FOR(i,1,n) cin >> a[i];
    dp[0] = '0';
    if (a[1] == 0) dp[1] = '0';
    else dp[1] = '1';
    if (a[2] == 0) dp[2] = '0';
    else dp[2] = '2';
    FOR(i,3,n) {
        if (a[i] == 0) dp[i] = '0';
        else if (a[i-1] == 0 && a[i-2]) dp[i] = dp[i-2];
        else if (a[i-1] && a[i-2] == 0) dp[i] = dp[i-1];
        else if (a[i-1] && a[i-2]) dp[i] = add(dp[i-1],dp[i-2]);
    }
    cout << dp[n];
    return 0;
}