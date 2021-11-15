// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Simple DP

dp[i][j] Is The Number Of Ways To Coordinate (i , j)

dp[i][j] = dp[i-1][j] + dp[i][j - 1]
Explaination:

- Because We Can Only Move Right or Down
	=> dp[i-1][j] means the sum of ways to the upper of (i,j)
	   dp[i][j-1] means the sum of ways to the left of (i , j)
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "roadway"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int to_num(char a){
        return a-'0';
}

string cong(string a, string b){
        reverse(a.begin() , a.end());
        reverse(b.begin() , b.end());

        while(a.size() < b.size())
                a += '0';

        while(b.size() < a.size())
                b+= '0';
        string rev = "";
        int add , nho = 0;
        for(int i = 0 ; i < a.size() ; i++){
                add = to_num(a[i]) + to_num(b[i]) + nho;
                if(add > 9){
                        nho = 1;
                        add %= 10;
                }else nho = 0;
                rev += add + '0';
        }

        if(nho > 0)
                rev += nho + '0';

        reverse(rev.begin() , rev.end());
        return rev;

}


void solve(){
	int n , m;
	cin >> n >> m;
	string dp[n+2][m+2];
	dp[1][1] = "1";
	for(int i = 0 ; i <= n; i++) dp[i][1] = "1";
	for(int i = 0 ; i <= m ; i++) dp[1][i] = "1";
	for(int i = 2 ; i <= n ; i++){
		for(int j = 2 ; j <= m ; j++){
			dp[i][j] = cong(dp[i-1][j] , dp[i][j-1]);
		}
	}

	cout << dp[n][m] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
