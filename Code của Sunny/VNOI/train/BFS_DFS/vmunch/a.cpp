//   Author : Phuong aka SunnyYeahBoiii
//   Day : Unknown
   
#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define endl "\n"

using namespace std;

const int INF = 1 << 30;

int best[105][105];
int value[105][105];
char path[105][105];
bool visited[105][105];
int n , m;
vector<pair<int , int>> gone;

inline bool gud(int u , int v){
	if(u >= 0 && u < n && v >= 0 && v < m)
		if(path[u][v] != '*')
			return true;
	return false;
}

void solve(){
	cin >> n >>m;
	int ii , jj;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> path[i][j];
			if(path[i][j] == 'C'){
				ii = i;
				jj = j;
			}
			//path[i][j] = '.';
			best[i][j] = INF;
			value[i][j] = 0;
			visited[i][j] = false;
		}
	}
	queue<pair<int , int>> q;
	q.push({0 , 0});
	best[0][0] = 0;
	pair<int , int> cur;
	while(!q.empty()){
		cur = q.front();
		q.pop();
		if(visited[cur.first][cur.second] == true)
			continue;
		int u = cur.first , v = cur.second;
		visited[u][v] = true;

		if(gud(u , v+1)){
			if(best[u][v] + 1 < best[u][v+1]){
				q.push({u , v+1});
				best[u][v+1] = best[u][v]+1;
			}
		}
		
		if(gud(u , v-1)){
			if(best[u][v] + 1 < best[u][v-1]){
				q.push({u , v-1});
				best[u][v-1] = best[u][v]+1;
			}
		}
		if(gud(u+1 , v)){
			if(best[u][v] + 1 < best[u+1][v]){
				q.push({u+1 , v});
				best[u+1][v] = best[u][v]+1;
			}
		}
		if(gud(u-1 , v)){
			if(best[u][v] + 1 < best[u-1][v]){
				q.push({u-1 , v});
				best[u-1][v] = best[u][v]+1;
			}
		}
	}
	/*
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(best[i][j] == INF)
				cout << "0 ";
			else cout << best[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout <<best[ii][jj]<< endl;
}

int main(){
	solve();
	return 0;
}

/*

5 3
B . .
* * .
* . .
* . *
* . C

/*/
