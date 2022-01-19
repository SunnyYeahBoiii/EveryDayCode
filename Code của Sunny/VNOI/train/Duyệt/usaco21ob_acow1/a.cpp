#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

void solve(){
	int n , l;
	cin >> n >> l;
	int a[n+1];
	for(int i = 1 ; i <= n ; i++)cin >> a[i];
	
	auto check = [&](int x , int& res){

		int cnt = 0 , up = 0;
		for(int i = 1 ; i <= n ; i++)
			if(a[i] >= x)
				cnt++;
			else if(a[i] == x-1) up++;

		if(cnt + min(up , l) >= x){
			res = max(res , x);
			return true;
		}else return false;
	
	};


	int left = 0 , r = n , m , res = 0;

	while(left <= r){
		m = (left+r)/2;

		if(check(m , res))
			left = m+1;
		else r = m - 1;

	}

	cout << res << endl;
}

int main(){
	solve();
	return 0;
}
