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
#define INF 1 << 30


void solve(){

	vector<int> c = {1 , 3 , 4};
	int n = 5;

    vector<int> dp(1000 , 0);
    
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int x : c){
            if(i - x >= 0)
                dp[i] += dp[i - x];
        }
    }
    
    for(int i = 0 ; i <= n ; i++)
		cout << dp[i] << " ";
	cout << endl;

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