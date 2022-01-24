// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bai3"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){

    string s = "";

    char a;
    while(cin >> a){
        s += a;
    }
    map<char , int> cnt;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] <= 'z' && s[i] >= 'a')
            s[i] -= 'a' - 'A';   
        if(s[i] <= 'Z' && s[i] >= 'A') cnt[s[i]]++;
    }

    char res ; int rc = 0;

    for(int i = 'A' ; i <= 'Z' ; i++){
        if(cnt[i] > rc){
            rc = cnt[i];
            res = i;
        }
    }
    if(rc == 0){
        cout << 0 << endl;
        return;
    }
    cout << res << endl << rc << endl;
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