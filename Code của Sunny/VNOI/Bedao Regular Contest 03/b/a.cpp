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

string s;

void solve(){
	cin >> s;
	map<char , int> cnt;
	for(int i = 0 ; i < s.size() ; i++)
		cnt[s[i]]++;
	int res = 0;
	
	bool mark[30][30];

	memset(mark , false , sizeof(mark));

	bool flag = false;

	for(int i = 0 ; i < 26 ; i++){
		for(int j = 0 ; j < 26 ; j++){
			char a = i + 'a' , b = j + 'a';

			if(cnt[a] == 0 || cnt[b] == 0){
				continue;
			}
			//cout << a << " " << b << endl;
			if(a == b && cnt[a] > 1){
				flag = true;
			}else if(a == b && cnt[a] == 1)
				continue;
			else if(!mark[i][j] && !mark[j][i]){
				res += cnt[a] * cnt[b];
				mark[i][j] = true;
				mark[j][i] = true;
			}
			//cout << res <<endl;
		}
	}
	if(flag) res++;
	cout << res << endl;
	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
