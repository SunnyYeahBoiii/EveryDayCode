// https://cses.fi/problemset/task/1069
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
    vector<int> a(n+1 , 0);
    int x;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> x;
        a[x]++;
    }

    for(int i = 1 ; i <= n ; i++)
        if(a[i] == 0){
            cout << i << endl;
            return;
        }
}

int32_t main(){
	FileInput();
	fast();    
	solve();
	return 0;	
}