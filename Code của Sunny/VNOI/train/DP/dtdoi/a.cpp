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

const int LIM = 10000;

int dp[105][50000];

void solve(){

    int n , s;
    cin >> n >> s;

    vector<int> a(n);
    int maxx = -INF;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        maxx = max(maxx , a[i]);
    }

    int add = 0;

    if(s > LIM){
        add = (s - LIM) / maxx;
        s -= add * maxx;
    }

    memset(dp , sizeof(dp) , 0);

    for(int i = 0 ; i <= s; i++)
        dp[0][i] = 0;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= s ; j++){
            dp[i][j] = 0;
            if(j - a[i] >= 0)
                dp[i][j] = dp[i-1][j-a[i]] + 1;
            //cout << dp[i][j] << " ";
        }
        //cout << endl;
    }

    cout << dp[n][s] + add << endl;
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