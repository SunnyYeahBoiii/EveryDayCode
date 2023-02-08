
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
#define INF 1000000000
typedef unsigned long long int ull;
using namespace std;
int n;
ll a[5005];
void solve(){
    cin >> n;
    FOR(i,0,n-1) cin >> a[i];
    int d = 0;
    sort(a,a+n);
    FOD(i,n-1,0) {
        int l = 0, r= i-1;
        while (l < r) {
            int sum = a[l]+a[r];
            if (sum > a[i]) {
                d += r-l;
                r--;
            } else l++;
        }
    }
    cout << d;
}
int main(){
    //fast;
    //freopen("TRIBEAUT.inp","r",stdin);
    //freopen("TRIBEAUT.out","w",stdout);
     solve();
}
