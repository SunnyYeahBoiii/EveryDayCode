// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int prime[1000005] , cnt[8][1000005];
const int MAX = 1000000;

void sieve(){
	prime[0] = 0;
	prime[1] = 0;
	for(int i = 2 ; i <= MAX ; i++)
		prime[i] = 0;

	for(int i = 2 ; i <= MAX ; i++){
		if(prime[i] == 0)
			for(int j = 1 ; i*j <= MAX ; j++)
				prime[i*j]++;
	}
	
	map<int , int> k;

	for(int i = 0 ; i <= MAX; i++){
		cnt[0][i] = cnt[0][i-1];
		cnt[1][i] = cnt[1][i-1];
		cnt[2][i] = cnt[2][i-1];
		cnt[3][i] = cnt[3][i-1];
		cnt[4][i] = cnt[4][i-1];
		cnt[5][i] = cnt[5][i-1];
		cnt[6][i] = cnt[6][i-1];
		cnt[7][i] = cnt[7][i-1];
		if(prime[i] <= 7)
			cnt[prime[i]][i]++;
	}
}

void solve(){
	sieve();		
	int q;
	cin >> q;
	int a , b , k;
	for(int i = 0 ; i < q;  i++){
		cin >> a >> b >> k;
		cout << cnt[k][b] - cnt[k][a-1] << endl;
	}
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
