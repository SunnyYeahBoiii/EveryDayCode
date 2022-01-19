#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n+5];
	for(int i= 0 ; i <n ; i++){
		cin >> a[i];
	}
	deque<int> arr;
	arr.push_back(1);
	int d = 2;
	for(int i = 0 ; i < n ; i++){
		while(d <= a[i]){
			arr.push_back(d);
			++d;
		}
		if(arr.back() == a[i])
			arr.pop_back();
		else{
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" <<endl;
}

int main(){
	solve();
	return 0;
}
