#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

int c[20][20];
int n;
int mark[20];

int find(int i){
	mark[i] =  false;
	int rev = 1 << 30;
	bool Last = true;
	for(int j = 1 ; j <= n ; j++){
		if(mark[j]){
			rev = min(rev , c[i][j] + find(j) );
			Last = false;
		}
	}	
	mark[i] = true;
	if(Last == true){
		//cout <<i <<  " 0" <<endl;
		return 0;
	}
	//cout << i << " " << rev << endl;
	return rev;
}

void solve(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> c[i][j];
		}
	}	
	
	int res = 1 << 30;
	for(int i = 0 ; i <= n ; i++) mark[i] = true;
	for(int i = 1 ; i <= n ; i++)res = min(res , find(i));

	cout << res << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
            
