// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

log_a(b^x) = 	

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int unsigned long long
#define endl "\n"
#define INF 1 << 30

bool check(int x , int y){
	int cur = x;
	while(cur < y){
		cur *= x;
	}

	return cur == y;
}

bool snt(int a){
	if(a < 2)
		return false;
	for(int i = 2; i*i <= a ; i++){
		if(a % i == 0)
			return false;
	}
	return true;
}

void solve(){
	int a , b , x;
	cin >> a >> b >> x;
	int cnt = 0;	
	if(a <= 1 ){
		cout << "-1" << endl;
		return;
	}
	if(!check(a , b)){
		cout << "-1" << endl;
		return;
	}
	while(b >= a){
		cnt++;
		b /= a;
	}
	int res = x * cnt;
	//cout << res << endl;
	map<int , int> k;
	k.clear();
	int i = 2;
	while(res > 1){
		if(snt(res)){
			k[res]++;
			res = 0;
			break;
		}

		while(res % i != 0)
			i++;

		while(res % i == 0){
			k[i]++;
			res /= i;
		}
	}
	
	vector<pair<int , int>> l;

	for(auto p : k){
		l.push_back({p.first , p.second});
	}

	for(int i = 0 ; i < l.size() ; i++){
		cout << l[i].second << " ";
	}
	cout << endl;
	for(int i = 0 ; i < l.size() ; i++){
		cout << l[i].first << " " ;
	}
	cout << endl;


}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        int t;
	cin>>t;
	while(t--)
		solve();
        return 0;
}        
