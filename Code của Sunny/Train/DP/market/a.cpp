// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/*
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int n , m;
vector<int> x , c , dp;

void solve(){
    cin >> n >> m;
    x.resize(n+5);
    c.resize(m+5);
    dp.resize(n+5 , INF);

    for(int i = 1 ; i <= n ; i++)
        cin >> x[i];

    sort(x.begin() + 1 , x.begin() + n + 1);

    for(int i = 1 ; i <= m ; i++)
        cin >> c[i];

    int t = c[m];
    for(int i = m-1 ; i >= 0 ; i--){
        t = min(c[i] , t);
        c[i] = t;
    }

    dp[0] = 0;
    dp[1] = c[1];
    for(int i = 2 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            int t = x[i] - x[j] + 1;
            dp[i] = min(dp[i] , dp[j-1] + c[t]);
        }
    }

    cout << dp[n] << endl;
}

int32_t main(){
	FileInput();
	fast();
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;
}
