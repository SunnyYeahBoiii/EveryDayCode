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
	map<char , int> cnt;
	int n = s.size();
	for(int i = 0 ; i < n ; i++)
		cnt[s[i]]++;

	for(int i = 0 ; i < n ; i++)
		if(cnt[s[i]] == 1){
			cout << i+1 << endl;
			return;
		}
	cout << "-1" << endl;
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
