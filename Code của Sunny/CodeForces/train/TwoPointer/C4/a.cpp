// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

bool cmp(pair<int , int> a , pair<int , int> b){
	return a.first < b.first;
}

void solve(){

	int n = 0 , n1;
	vector<pair<int , int>> a;
	
	cin >> n1;
	a.resize(n+n1);
	for(int i = 0 ; i < n1 ; i++){
		cin >> a[n+i].first;
		a[n+i].second = 0;
	}
	n += n1;

	cin >> n1;
	a.resize(n+n1);
	for(int i = 0 ; i < n1 ; i++){
		cin >> a[n+i].first;
		a[n+i].second = 1;
	}
    n += n1;

	cin >> n1;
	a.resize(n+n1);
	for(int i = 0 ; i < n1 ; i++){
		cin >> a[n+i].first;
		a[n+i].second = 2;
	}
    n += n1;

	cin >> n1;
	a.resize(n+n1);
	for(int i = 0 ; i < n1 ; i++){
		cin >> a[n+i].first;
		a[n+i].second = 3;
	}
	n += n1;

	sort(a.begin() , a.end() , cmp);

	vector<int> cur(4 , -1) , resArr(4 , -1);
	int res = INF;

	for(int i = 0 ; i < n ; i++){
		cur[a[i].second] = i;

		if(cur[0] != -1 && cur[1] != -1 && cur[2] != -1 && cur[3] != -1){
			int maxx = max({a[cur[0]].first , a[cur[1]].first , a[cur[2]].first , a[cur[3]].first});
			int minn = min({a[cur[0]].first , a[cur[1]].first , a[cur[2]].first , a[cur[3]].first});
            if(maxx - minn < res){
				res = maxx - minn;
				for(int i = 0 ; i < 4 ; i++)
					resArr[i] = a[cur[i]].first;
			}
		}
	}
	for(int i = 0 ; i < 4 ; i++)
		cout << resArr[i] << " ";
	cout << endl;
}

int32_t main(){
	FileInput();
	fast();    
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}