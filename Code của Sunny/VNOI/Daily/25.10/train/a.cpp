#include "bits/stdc++.h"

using namespace std;

#define int long long

struct info{
	int a,  b;
};

bool cmp(info a , info b){
	return a.a < b.a;
}

void solve(){
	int n , c;
	cin >> n >> c;
	info arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i].a >> arr[i].b;
	
	sort(arr , arr+n , cmp);

	int cur = c , res = 0 , i = 0;
	while(cur >= arr[i].a && i < n){
		cur += arr[i].b;
		res++;
		i++;	
	}

	cout << res << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
