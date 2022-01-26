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

void solve(){

    string s;
    cin >> s;

    sort(s.begin() , s.end());

    //cout << s << endl;

    string cap = "" , non = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] <= 'Z')
            cap.push_back(s[i]);
        else non.push_back(s[i]);
    }

    sort(cap.begin() , cap.end() , greater<char>());
    sort(non.begin() , non.end() , greater<char>());

    cout << cap << non << endl;
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