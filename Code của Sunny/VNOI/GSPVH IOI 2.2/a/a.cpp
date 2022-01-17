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

vector<int> a(2*1005) , b(3*100010) , dp(2*1010 , 0) , cur(2*1010 , 0);

void solve(){

    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for(int j = 0 ; j < m ; j++)
        cin >> b[j];

    for(int j = 0 ; j < m ; j++){
        dp.clear();
        cur.clear();
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            if(b[j] + a[i] >= 0){
                dp[i] = 1;
                cur[i] = b[j] + a[i];
            }else{
                dp[i] = -1;
                cur[i] = -INF;
            }
            for(int k = 0 ; k < i ; k++){
                if(a[i] + cur[k] >= 0 && dp[k] + 1 > dp[i]){
                    dp[i] = dp[k] + 1;
                    cur[i] = a[i] + cur[k];
                }
            }
          //  cout << dp[i] << " ";
            res = max(res , dp[i]);
        }
        /*
        cout << endl;
        for(int i = 0 ; i < n ; i++)
            cout << cur[i] << " ";
        cout << endl << endl;
        */
       cout << res << " ";
    }

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
