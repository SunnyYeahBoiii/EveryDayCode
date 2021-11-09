#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdsabest"
#define FileInput() freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);
#define int long long
#define endl "\n"

void solve(){
	int n;
	cin >> n;
	int a[2*n];
	for(int i = 0 ; i < n*2 ; i++)
		cin >> a[i];

	sort(a , a+n*2);

	deque<int> res;
	int l = n-1 , r = n;
	for(int count = 1 ; count <= 2*n ; count++){
		if(count % 2 == 1){
			res.push_back(a[l]);
			l--;
		}else{
			res.push_back(a[r]);
			r++;
		}
	}

	vector<int> ans(res.begin() , res.end());

	for(int i = 0 ; i < ans.size() ; i++)
		cout << ans[i] << endl;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//FileInput();
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
