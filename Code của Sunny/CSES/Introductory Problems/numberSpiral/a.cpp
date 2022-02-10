// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "out"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
//#define endl "\n"
#define INF 1 << 30

void solve(){

    int x , y , res;
    cin >> x >> y;
    //cout << x << " "<< y << endl;
    int cross = max(x , y);
    res = 1 + cross*(cross-1);

    if(y == x){
        cout << res << endl;
        return;
    }if(x < y){

        if(y % 2 == 1){
            res += y - x;
        }else{
            res -= y - x;
        }

        cout << res << endl;
    }else{
        if(x % 2 == 0){
            res += x - y; 
        }else{
            res -= x - y;
        }
        cout << res << endl;
    }

}

int32_t main(){
	//FileInput();
	//fast();    
	int t;
    cin >> t;
    while(t--)
	solve();
	return 0;	
}