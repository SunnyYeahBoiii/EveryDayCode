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
#define INF 100000
bool ok;
ll a[300][300];
int n,x[300][300];
bool thoaman(int k) {
    if (k == 1) return true;
    int i = k,j = 2;
    while (i >= 2) {
        x[i][j] = a[i-1][j-1] - (x[i-1][j-1]+x[i][j-1]+x[i-1][j]);
        if (x[i][j]<0 || x[i][j]>1) return false;
        --i;++j;
    }
    return true;
}
void Xuly() {
    FOR(i,2,n) 
    FOR(j,2,n) {
        x[i][j] = a[i-1][j-1]-(x[i-1][j-1]+x[i-1][j]+x[i][j-1]);
        if (x[i][j]<0 || x[i][j]>1) return;
    }
   FOR(i,1,n) {
        FOR(j,1,n) cout << x[i][j] << " ";
        cout << '\n';
    }
    ok = true;

}
void Thu(int k) {
    if (ok) return;
  if (k>n) {Xuly(); return;}
  FOR(i,0,1)
  FOR(j,0,1) {
      if (ok) return;
     x[1][k]=i, x[k][1]=j;
     if (thoaman(k)) {
         Thu(k+1);
     }
  }
}
void solve(){
    cin >> n;
    ok = false;
    FOR(i,1,n-1) FOR(j,1,n-1) cin >> a[i][j];
    FOR(i,0,1) {
        x[1][1] = i;
        Thu(2);
        if (ok) break;
    }
    
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}   
