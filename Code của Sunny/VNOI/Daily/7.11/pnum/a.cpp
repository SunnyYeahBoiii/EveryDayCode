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
#define rev(n) int a;while(n > 0){a = a*10+(n%10);n/=10;};n=a;
bool prime[] = {0 , 0 , 1 , 1 , 0 , 1 , 0, 1 , 0 , 0};
bool mark[11];
void solve(){
	int n;
	cin >> n;
	int cur;
	memset(mark , true , sizeof(mark));
	vector<int> res;
	rev(n);
	while(n > 0){
		cur = n % 10;
		n /= 10;
		if(prime[cur] && mark[cur]){
			//cout << cur << " ";
			res.push_back(cur);
			mark[cur] = false;
		}
	}
	if(res.size() == 0){
		cout <<"0" << endl;
		return;
	}
	for(int i = 0 ; i < res.size() ; i++)
		cout << res[i] << " ";
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
