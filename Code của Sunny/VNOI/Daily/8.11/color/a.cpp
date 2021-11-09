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

map<int , vector<int>> color;
vector<int> edge[100001];
int a[100001];
bool mark[100001];
bool counted[100001];

void solve(){
	int n , q;
	cin >> n >> q;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	//memset(box , -1 , sizeof(box));
	int p , x , y;	
	for(int i = 0 ; i < q ; i++){
		cin >> p >> x >> y;
		if(p == 1){
			edge[x].push_back(y);
			edge[y].push_back(x);
		}	
		else if(p == 2){
			int cnt = 0;
			memset(mark , true , sizeof(mark));
			memset(counted , true , sizeof(counted));
			queue<int> q;
			q.push(x);
			while(!q.empty()){
				int u = q.front();
				q.pop();
				if(!mark[u])
					continue;
				mark[u] = false;
				if(a[u] == y && counted[u]){
					cnt++;
					counted[u]= false;
				}
				for(auto v : edge[u]){
					if(a[v] == y && counted[v]){
						cnt++;
						counted[v] = false;
					}
					q.push(v);
				}
			}

			cout << cnt << endl;
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
