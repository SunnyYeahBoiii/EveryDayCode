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
int t;
void solve(){
	t = 0;
    cin >> t ; int res = 0;
    if ( t > 2){
    if ( t % 2 == 0){
        res = 1;
        t -= 1;
        while ( t > 0 ) {
            if ( res % 2 == 1) {
            res = res*10 + 2;
            t -= 2;}
            else if ( res % 2 == 0 ){
            res = res*10 + 1;
            t -= 2;} 
        }
    }
    else if ( t % 2 == 1 ){
        res = 2;
        t -= 2;
        while ( t > 0 ){
            if ( res % 2 == 1) {
            res = res*10 + 2;
            t -= 2;}
            else if ( res % 2 == 0 ){
            res = res*10 + 1;
            t -= 2;}    
        }
    }
        cout << res << endl;
    }
    else {cout << t << endl; }
}
int main(){
    fast;
    int cac;
    cin >> cac;
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    while(cac--)
    solve();  
    return 0;
}