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
#define INF LLONG_MAX

bool cmp(pair<int , int> a , pair<int , int> b){
    return a.second - a.first > b.second - b.first;
}

void solve(){

    int n , m;
    cin >> n >> m;

    vector<pair<int , int>> a(n);

    int u , v , res = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].first;

    for(int i =  0 ; i < n ; i++)
        cin >> a[i].second;

    sort(a.begin() , a.end() , cmp);

    int res = 0;

    for(int i = 0 ; i < n ; i++){
        
    }
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