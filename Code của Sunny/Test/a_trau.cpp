// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/*
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "a_trau"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen("a.inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

struct info{
    int w , h;
};

void solve(){

    int n;
    cin >> n;

    vector<info> a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].w >> a[i].h;

    vector<int> dp(n);
    dp[0] = a[0].h;
    for(int i = 1 ; i < n ; i++){
        dp[i] = a[i].h;
        for(int j = 0 ; j < i ; j++)
            if(a[j].w >= a[i].w)
                dp[i] = max(dp[i] , dp[j] + a[i].h);
    }

    cout << *max_element(dp.begin() , dp.end()) << endl;
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
