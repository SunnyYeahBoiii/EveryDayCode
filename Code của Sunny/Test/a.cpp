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

bool cmp(pair<int , int> a,  pair<int , int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve(){

    vector<pair<int , int>> s = {{2 , 3},{3 , 3},{1 , 3}};

    sort(s.begin() , s.end() , cmp);

    for(int i = 0 ; i < s.size() ; i++)
        cout << s[i].first << " " << s[i].second << endl;;

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