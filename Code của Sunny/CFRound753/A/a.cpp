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
	string s , al;
	cin >> al;
	cin >> s;
	map<char , int> t;
	for(int i = 0 ; i < al.size() ; i++)
		t[al[i]] = i+1;
	int res = 0;
	for(int i = 1 ; i < s.size() ; i++)
		res += abs(t[s[i]]-t[s[i-1]]);

	cout <<res << endl;
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
