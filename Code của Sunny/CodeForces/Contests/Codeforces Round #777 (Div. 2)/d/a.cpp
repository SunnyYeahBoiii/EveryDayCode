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

    int x , d;
    cin >> x >> d;

    int cnt = 0;

    for(int i = 1 ; i <= ceil(sqrt(x)) ; i++){
        if(x % i == 0){
            int a = i;
            int b = x / i;
            if(a % d == 0 && b % d == 0){
                cnt++;
                cout << a << " " << b << endl;
            }
        }
    }
    if(cnt >= 2)
        cout << "YES" << endl;
    else cout << "NO" << endl;
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