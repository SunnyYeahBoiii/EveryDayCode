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

char open[] = {'(' , '<' , '{' , '['};
char close[] = {')' , '>' , '}' , ']'};

bool isOpen(char a){
	for(int i = 0; i < 4 ; i++)
		if(a == open[i])
			return true;
	return false;
}

bool isClose(char a){
	for(int i = 0 ; i < 4 ; i++)
		if(a == close[i])
			return true;
	return false;
}

void solve(){
	string s;
	cin >> s;
	int n = s.size();
	map<char , int> cnt;
	int d = 0;
	for(int i = 0 ; i < n ; i++){
		if(isOpen(s[i]))
			d++;
		else if(isClose(s[i]))
			d--;
		cnt[s[i]]++;
	}
	if(d != 0)
		cout << "Impossible" << endl;
	else {
		int sto = 0 , res = 0;
		if(cnt['{'] > cnt['}'])
			sto += cnt['{'] - cnt['}'];
		else{sto -= cnt['}'] - cnt['{'];res +=cnt['}']-cnt['{'];}
		if(cnt['<'] > cnt['>'])
			sto += cnt['<'] - cnt['>'];
		else{sto -= cnt['>'] - cnt['<'];res +=cnt['>']-cnt['<'];}
		
		if(cnt['['] > cnt[']'])
			sto += cnt['['] - cnt[']'];
		else{sto -= cnt[']'] - cnt['['];res += cnt[']']-cnt['['];}
		
		if(cnt['('] > cnt[')'])
			sto += cnt['('] - cnt[')'];
		else {sto -= cnt[')'] - cnt['('];res +=cnt[')']-cnt['('];}
		cout << res << endl;
	}
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
