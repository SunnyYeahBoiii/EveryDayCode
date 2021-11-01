// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "hugoways"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

vector<int> edge[100005];

void solve(){
	int n;	
	cin >> n;
	int x, y;
	while(cin >> x >> y){
		edge[x].push_back(y);
	}	

	map<int , int> cnt;

	queue<int> q;
	q.push(1);
	cnt[1] = 1;
	
	while(!q.empty()){
		int u = q.front();
		q.pop();
		
		for(auto v : edge[u]){
			cnt[v]++;
			q.push(v);
		}
	}

	cout << cnt[n] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
