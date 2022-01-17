// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "SYMMETRY"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int dp[300][300];

void solve(){

    string a , b;
    cin >> a;
    a = '$' + a;
    b = a;
    reverse(b.begin() , b.end());
    b = '$' + b;

    for(int i = 1 ; i < a.size() ; i++){
        for(int j = 1 ; j < b.size() ; j++){
            dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            if(a[i]== b[j])
                dp[i][j] = max(dp[i][j] , dp[i-1][j-1] + 1);
            //cout << dp[i][j] << " ";
        }
        //cout << endl;
    }

    cout << a.size() - dp[a.size()-1][b.size()-1] - 1 << endl;
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