#include "bits/stdc++.h"

using namespace std;

int a[1005][1005];
long long pref[1005][1005];

void solve(){
	int n , m , k;
	cin >> n >> m >> k;	
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin>> a[i][j];
		}
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			pref[i][j] = pref[i][j-1] + pref[i-1][j]
				     - pref[i-1][j-1] + a[i][j];
		}
	}

	long long res = 0;
	for(int i = k ; i <= n ; i++){
		for(int j = k ; j <= m ; j++){
			res = max(res , pref[i][j] - pref[i-k][j] 
					- pref[i][j-k]
					+ pref[i-k][j-k]);
		}
	}

	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
