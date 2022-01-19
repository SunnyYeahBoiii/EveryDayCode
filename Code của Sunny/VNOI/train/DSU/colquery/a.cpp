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

map<int , int> color[100001];
int a[100001] , box[100001];

int root(int x){
	return (box[x] < 0) ? x : box[x] = root(box[x]);
}

void blend(int x , int y){
    for(auto p : color[y]){
		int u = p.first;
		color[x][u] += color[y][u];
	}
}

void merge(int x , int y){
	x = root(x) , y = root(y);
	//cout << x << " " << y << endl;
	if(x == y)
		return;

	if(box[x] > box[y])
		swap(x , y);
	blend(x , y);
	box[x] += box[y];
	box[y] = x;
}

void solve(){
	int n , q;
	cin >> n >> q;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		color[i][a[i]] = 1;
	}
	memset(box , -1 , sizeof(box));
	int p , x , y;	
	for(int i = 0 ; i < q ; i++){
		cin >> p >> x >> y;
		if(p == 1)
			merge(x , y);
		else if(p == 2){
			int d = root(x);
			//cout << d << " ";
			cout << color[d][y] << endl;
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
