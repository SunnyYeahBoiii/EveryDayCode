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

map<string , vector<string>> path;
map<string , int> dp;

void low(string& a){
    for(int i = 0 ; i < a.size() ; i++)
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + ('a' - 'A');
}

void solve(){

    int n;
    cin >> n;

    string u , r , v;

    int res = 1;
    dp["polycarp"] = 1;

    for(int i = 0 ; i < n ; i++){
        cin >> u >> r >> v;
        low(u) ; low(v);
        dp[u] = dp[v] + 1;
        res = max(res , dp[u]);
    }

    cout << res << endl;
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
