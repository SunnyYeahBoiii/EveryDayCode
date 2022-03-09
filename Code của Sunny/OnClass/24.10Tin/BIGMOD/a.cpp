// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bigmod"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int pow_mod(int a , int b , int m){
    if(b < 1)
        return 1;
    if(b == 1)
        return a % m;
    if(b % 2 == 0){
        int x = pow_mod(a , b / 2 , m);
        return (x * x) % m;
    }
    if(b % 2 == 1){
        int x = pow_mod(a , b / 2 , m);
        return (a * ((x * x) % m)) % m;
    }
}

void solve(){
    int b , p , m;
    cin >> b >> p >> m;

    cout << pow_mod(b , p , m) << endl;
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