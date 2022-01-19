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

void solve(){
	string s;
	cin >> s;
	sort(s.begin() , s.end());
	vector<string> res;
	res.push_back(s);
	while(next_permutation(s.begin() , s.end())){
		res.push_back(s);
	}	

	cout << res.size() << endl;
	for(int i = 0 ; i < res.size() ; i++)
		cout << res[i] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
