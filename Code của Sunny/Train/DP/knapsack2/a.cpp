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
#define INF INT_MAX

int n , w;
int a[105] , b[105];
int dp[100005];

void solve(){
	cin >> n >> w;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] >> b[i];

	dp[0] = 0;

	for(int i = 1 ; i <= 100000 ; i++)
		dp[i] = INF;

	for(int i = 0 ; i < n ; i++){
		for(int j = 100000 ; j>= 0 ; j--){
			if(j - b[i] >= 0)
				dp[j] = min(dp[j-b[i]] + a[i] , dp[j]);
		}
	}

	int t = 100000;
	while(dp[t] > w)
		t--;

	cout << t << endl;
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