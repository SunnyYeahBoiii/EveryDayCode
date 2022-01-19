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

int box[10005];

int find_root(int x){
	return (box[x] < 0) ? x : box[x] = find_root(box[x]);
}

void merge(int x , int y){
	int u = find_root(x) , v= find_root(y);
	if(u == v)
		return;
	if(box[u] > box[v])
		swap(u , v);
	box[u] += box[v];
	box[v] = u;
}

bool check(int x , int y){
	return find_root(x) == find_root(y);
}

void solve(){
	int t;
	cin >> t;
	for(int i = 0 ; i < 10005 ; i++){
		box[i] = -1;
	}

	int x , y , q;
	for(int i = 0 ; i < t ; i++){
		cin >> x >> y >> q;
		if(q == 1)
			merge(x , y);
		else{ 
			if(check(x , y))
				cout << "1" << endl;
			else cout << "0" << endl;
		}
	}

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
