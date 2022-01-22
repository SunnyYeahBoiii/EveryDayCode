// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "a"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int n;
vector<int> s , d;
vector<pair<int , int>> arr;

bool cmp(pair<int , int> a , pair<int , int> b){
	return a.first < b.first;
}

void solve(){

	cin >> n;
	s.resize(n);
	arr.resize(n);
	d.resize(n);

	for(int i = 0 ; i < n ; i++)
		cin >> s[i];

	for(int i = 0 ; i < n ; i++){
		cin >> d[i];
		arr[i] = {s[i] , d[i] + s[i]};
	}

	sort(arr.begin() , arr.end() , cmp);
	
	int res = arr[0].second - arr[0].first;
	int maxend = arr[0].second;

	for(int i = 1 ; i < n ; i++){
		if(arr[i].first >= maxend){
			res += arr[i].second - arr[i].first;
			maxend = arr[i].second;
		}else if(arr[i].first < maxend && arr[i].second > maxend){
			res += arr[i].second - maxend;
			maxend = arr[i].second;
		}
	}

	cout << res << endl;

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