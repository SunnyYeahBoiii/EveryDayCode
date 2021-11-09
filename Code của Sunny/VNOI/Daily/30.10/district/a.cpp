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

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	bool m[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	memset(m , false , sizeof(m));
	vector<pair<int , int>> ans;
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j++){
			if(a[j] != a[i] && m[j] == false){
				ans.push_back({i+1 , j+1});
				m[j] = true;
				m[i] = true;
			}
		}
	}
	if(ans.size() == n-1){
		cout << "YES"<< endl;
		for(int i = 0 ; i < ans.size() ; i++)
			cout << ans[i].first << " " << ans[i].second << endl;
	}else cout << "NO" << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
	int t;
	cin >> t;
	while(t--)
        solve();
        return 0;
}        
