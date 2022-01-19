#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

int num[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int Find(int n){
	if(n < 10)
		return num[n];
	if((n/10%10)%2 == 0)
		return (6 * Find(floor(n/5)) * num[n%10]) % 10;
	else return (4 * Find(floor(n/5)) * num[n%10]) % 10;
}

void solve(int n){
	cout << Find(n) << endl;
}

int main(){
	int n;
	while(cin >> n)solve(n);
	return 0;
}
