#include<bits/stdc++.h>
#define FOR(x,a,b) for (int x=a;x<=b;x++)
#define FOD(x,a,b) for (int x=a;x>=b;x--)
#define pub push_back
#define pob pop_back
#define ii  pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
#define fast {ios_base::sync_with_stdio(false);cin.tie(NULL);}
typedef unsigned long long int ull;
typedef long long ll;
const long N=1e5 + 5;
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    FOR (i, 0 ,n - 1)
        cin >> a[i];
    sort(a.begin() ,a.end() , greater<int>());
    int res = 0;
    for(int i = 0 ; i < n ; i += 3){
        res += a[i];
        if(i+1 < n)
            res += a[i+1];
    }
    cout << res << endl;
}
int main(){
    fast;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    solve();  
    return 0;
}