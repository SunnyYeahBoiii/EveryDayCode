// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "AVGSEG"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX


void solve(){

    int n;
    cin >> n;

    int sum = 0;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    vector<int> b(n);

    b[0] = a[0];
    cout << b[0] << " ";
    for(int i = 1 ; i < n ; i++){
        a[i] *= i + 1;
        b[i] = a[i] - a[i-1];
        cout << b[i] << " ";
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