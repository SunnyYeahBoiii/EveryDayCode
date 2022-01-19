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

int container[10005] , box[10005];
vector<int> in[10005];
// container = ammount
// box = what is the i-th stone parent
// in = all stones in box i-th


void merge(int x , int y){
	int u = box[x] , v = box[y];
	
	if(u == v)
		return;
	// is in the same box
	
	if(in[u].size() < in[v].size())
		swap(u , v);

	while(in[v].size() > 0){
		int cur = in[v].back();
		in[u].push_back(cur);
		in[v].pop_back();
		box[cur] = u;
	}

	container[x] += container[y];
	container[y] = 0;
}

bool check(int x , int y){
	/*
	for(int i = 0 ; i < 10 ; i++)
		cout << box[i] << " ";
	cout << endl;
	*/
	return box[x] == box[y];
}

void solve(){
	int t;
	cin >> t;
	for(int i = 0 ; i < 10005 ; i++){
		box[i] = i;
		container[i] = 1;
		in[i].push_back(i);
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
