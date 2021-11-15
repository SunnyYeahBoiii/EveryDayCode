#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

struct info{
	unsigned long long p , c;
};

using namespace std;

bool cmp(info a,info b){return a.p < b.p;}

int main(){
	ios_base::sync_with_stdio(false);	
	cin.tie(0);cout.tie(0);
	freopen("CBuying.inp" , "r" , stdin);
	freopen("CBuying.out" , "w" , stdout);
	int n;
	long long b;
	cin >>n >> b;
	info a[n+5];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].p >> a[i].c;
	}
	sort(a , a+n ,cmp);
	long long res =0;
	for(int i = 0 ; i < n ; i++){
		if(a[i].p * a[i].c <= b){
			res += a[i].c;
			b -= a[i].p * a[i].c;
			if(b == 0) break;
		}else if(b >= a[i].p){
			res += b/a[i].p;
			b -= a[i].p * (b/a[i].p);
		}else if(b < a[i].p)break;
	}
	cout << res << endl;	
	return 0;
}

