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
	int n;
	cin >> n;
	if(n == 1){
		cout << "1" << endl;
		return;
	}

	vector<int> a;
	a.push_back(1);
	int cur = 2 , count = 2 , cnting = 0 , now = 1;
	while(now <= n){
		while(cnting < count){
			a.push_back(cur);
			cur += count;
			cnting++;
			now++;
		}
		cur -= count;
		cur++;
		count++;
		cnting = 0;
		while(cur % count != 0)
			cur++;
	}

	cout << a[n-1] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
