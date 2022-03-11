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

    int n;
    cin >> n;
    vector<string> a(n-2);
    for(int i = 0 ; i < n-2 ; i++)
        cin >> a[i];

    bool found = false;
    string s = "";
    s += a[0][0];
    for(int i = 0 ; i < n-3 ; i++){
        s += a[i][1];
        //cout << a[i][1] << " " << a[i+1][0] << endl;
        if(a[i][1] != a[i+1][0]){
            found = true;
            s += a[i+1][0];
        }
        //cout << s << endl;
    }

    s += a[n-3][1];
    if(!found) s += 'b';
    cout << s << endl;
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