#include<bits/stdc++.h>
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define pub push_back
#define pob pop_back
#define ii  pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
typedef long long ll;
const long N=1e5 + 5;
using namespace std;
int ucln(long a, long b) {
    long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void solve(){
    long a,b,n;
    cin >> a >> b >> n;
    long ans = n;
    while (ans > 0){
        long d = ucln(a,ans);
        ans = ans - d;
        if (ans == 0) cout << "0" << endl;
        else if ( ans < 0 ) cout << "1";
        else {
            d = ucln(b,ans);
            ans = ans - d;
            if (ans == 0) cout << "1" << endl;
            else if ( ans < 0) cout << "0";
        }
    }         
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}