#include "bits/stdc++.h"

using namespace std;

vector<int> ans(500001);
map<int , bool> check;
void init(){
	ans[0] = 0;
	for(int i = 0 ; i < 500001 ; i++){
		if(ans[i-1] - i > 0 && check[ans[i-1]-i] == false)
			ans[i] = ans[i-1] - i;
		else ans[i] = ans[i-1] + i;
		check[ans[i]] = true;
	}
}

void solve(){
	init();	
	int a;
	while(cin >> a){
		if(a == -1)
			return;
		cout << ans[a] << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
