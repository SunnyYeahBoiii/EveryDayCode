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
string mul(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
bool cmp(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;
    for (int i=0; i<n1; i++)
    {
       if (str1[i] < str2[i])
          return true;
       if (str1[i] > str2[i])
          return false;
    }
    return false;
}
void solve()
{
	int n;
	cin >> n;
    vector<string> a;
    string s = "5",s1 = "3",s2 = "4";
    a.push_back("1");
    a.push_back("2");
    a.push_back("3");
    a.push_back("4");
    a.push_back("5");
    while (a.size() < n) {
        string l,l1,l2;
        l = mul(s,"5");
        l1 = mul(s1,"3");
        l2 = mul(s2,"2");
        if (cmp(l,l1) && cmp(l,l2)) {
            a.push_back(l);
            s = l;
        }
        else
        if (cmp(l1,l) && cmp(l1,l2)) {
            a.push_back(l1);
            s1 = l1;
        }
        else
        if (cmp(l2,l1) && cmp(l2,l)) {
            a.push_back(l2);
            s2 = l2;
        }
    }
    cout << a[n-1];
}
int main()
{
    fast;
    // freopen("SEQUENCE.inp","r",stdin);
    // freopen("SEQUENCE.out","w",stdout);
    solve();
    return 0;
}
