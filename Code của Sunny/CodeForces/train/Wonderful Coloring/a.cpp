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


void solve(){

    string s;

    cin >> s;

    int r = 0 , g = 0;

    map<char , int> red , green;

    for(int i = 0 ; i < s.size() ; i++){
        if(red[s[i]] != true){
            red[s[i]] = true;
            r++;
        }
        else{
            if(green[s[i]] != true){
                green[s[i]] = true;
                g++;
            }
        }
    }

    while(r > g){
        r--;
        g++;
    }

    cout << min(r , g) << endl;
}

int32_t main(){
	FileInput();
	fast();     
	
	int t;
    cin >> t;
    while(t--)
	
	solve();
	return 0;	
}