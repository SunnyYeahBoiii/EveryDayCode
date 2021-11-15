// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "redtowel"
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


void solve(int w , int h , int n){
	w += 1; h += 1;
	int a[w+5][h+5] , x , y;
	memset(a , 0 , sizeof(a));
	for(int i = 0 ; i < n ; i++){
		cin >> x>> y;
		a[x+1][y+1] = 1;
	}	
	
	int dp[w+5][h+5];
        string	ways[w+5][h+5];

	for(int i = 0 ; i <= w+1 ; i++){
		dp[i][0] = INF;
	       	ways[i][0] = "0";
			
	}

	for(int i = 0 ; i <= h+1 ; i++){
		dp[0][i] = INF;
		ways[0][i] = "0";
	}

	dp[1][1] = 1;
	for(int i = 2 ; i <= w+1 ; i++){
		if(a[i][1] == 1){
			dp[1][i] = INF;
			ways[i][1] = "0";
			continue;
		}
		dp[i][1] = dp[i-1][1]+1;
		ways[i][1] = "1";
	}

	for(int i = 2 ; i <= h+1 ; i++){
		if(a[1][i] == 1){
			dp[1][i] = INF;
			ways[1][i] = "0";
			continue;
		}
		dp[1][i] = dp[1][i-1] + 1;
		ways[1][i] = "1";
	}

	ways[1][1] = "1";

	for(int i = 2 ; i <= w ; i++){
		for(int j = 2 ; j <= h ; j++){
			if(a[i][j] == 1){
				dp[i][j] = INF;
				ways[i][j] = "0";
			}else{
				if(dp[i-1][j] < dp[i][j-1]){
					dp[i][j] = dp[i-1][j] + 1;
					ways[i][j] = ways[i-1][j];
				}else if(dp[i][j-1] < dp[i-1][j]){
					dp[i][j] = dp[i][j-1] + 1;
					ways[i][j] = ways[i][j-1];
				}else{
					dp[i][j] = dp[i-1][j] + 1;
					ways[i][j] = cong( ways[i-1][j] , ways[i][j-1] );
				}
			}
		}
	}
	
	cout << "res = " <<ways[w][h] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
	int w , h , n;
	while(cin >> w>> h){
        	if(w == 0 && h == 0)
			break;
		cin >> n;
		solve(w , h , n);
	}
        return 0;
}        
