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
//#define endl "\n"
#define INF LLONG_MAX


void solve(){

    int n , q , k;
    cin >> n >> q >> k;

    vector<int> first(n+1) , mid(n+1) , last(n+1) , a(n+2);

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    mid[1] = 0;

    a[0] = 0;
    a[n+1] = k+1;

    for(int i = 1 ; i <= n ; i++){
        first[i] = a[i+1] - 2;
        last[i] = k - a[i-1] - 1;
        mid[i] = mid[i-1] + a[i+1] - a[i-1] - 2; 
    }

    int u , v;

    for(int i = 0 ; i < q ; i++){
        cin >> u >> v;
        cout << first[u] +last[v] + mid[v-1] - mid[u] << endl; 
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