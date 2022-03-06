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


void solve(){

    int n;
    cin >> n;
    vector<int> t(n+5),h(n+5);

    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];

    for(int i = 2 ; i <= n ; i++)
        cin >> h[i];

    vector<int> dp[2] , prev[2];
    dp[0].resize(n+5 , 0);
    dp[1].resize(n+5 , 0);
    prev[0].resize(n+5 , 0);
    prev[1].resize(n+5 , 0);

    //dp[0] là tự mua
    //dp[1] là nhờ ng trc mua

    dp[0][1] = t[1];
    dp[1][1] = INF;
    dp[0][2] = t[1] + t[2];
    dp[1][2] = h[2];
    
    for(int i = 3 ; i <= n ; i++){
        dp[0][i] = min(dp[0][i-1] , dp[1][i-1]) + t[i];
        dp[1][i] = min(dp[0][i-2] , dp[1][i-2]) + h[i];
    }

    int x , y;
    if(dp[0][n] < dp[1][n]){
        x = 0 ; y = n;
    }else{
        x = 1 ; y = n;
    }

    vector<int> res;
    while(y > 0){
        if(x == 1){
            res.push_back(y-1);
            y -= 2;
            if(dp[0][y] < dp[1][y])
                x = 0;
            else x = 1;
        }else{
            res.push_back(y);
            y--;
            if(dp[0][y] < dp[1][y])
                x = 0;
            else x = 1;
        }
    }

    cout << res.size() << endl;
    for(int i = res.size() - 1 ; i >= 0 ; i--)
        cout << res[i] << " ";
    cout << endl;
}

int32_t main(){
	//FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}