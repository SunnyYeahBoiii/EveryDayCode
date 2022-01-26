// Link :  http://vinhdinhcoder.net/Problem/Details/4672
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

void solve(){

    string s;
    cin >> s;

    sort(s.begin() , s.end());

    deque<char> res;

    for(int i = s.size()-1 ; i >= 0 ; i--){
        if(i % 2 == 1)res.push_back(s[i]);
        else res.push_front(s[i]);
    }

    for(int i = 0 ; i < res.size() ; i++)
        cout << res[i];
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