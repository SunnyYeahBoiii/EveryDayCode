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

    int n;
    cin >> n;

    if(n == 1){
        cout << "1" << endl;
        return;
    }

    if(n < 4){
        cout << "NO SOLUTION" << endl;
        return;
    }

    for(int i = 2 ; i <= n ; i += 2){
        cout << i << " ";
    }

    for(int i = 1 ; i <= n ; i += 2){
        cout << i << " ";
    }
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