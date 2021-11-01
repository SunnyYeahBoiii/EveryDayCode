// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
Same as the Stairs1
but if a[i] = 0 -> dp[i] *= 0
(P/s: Still BigNum)
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "stairs2"
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
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	string dp[n+1];
	dp[0] = "1";
	dp[1] = (a[1] == 1) ? "1" : "0";
	dp[2] = (a[2] == 1) ? cong("1" , dp[1]) : "0";
	for(int i = 3 ; i <= n ; i++){
		dp[i] = (a[i] == 1) ? cong(dp[i-1] , dp[i-2]) : "0";
	}	
	cout << dp[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
