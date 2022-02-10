// https://cses.fi/problemset/task/1068
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
    while(n != 1){
        cout << n << " ";
        if(n % 2 == 1)
            n = n * 3 + 1;
        else n /= 2;
    }
    cout << n << " ";

}

int32_t main(){
	FileInput();
	fast();    
	solve();
	return 0;	
}