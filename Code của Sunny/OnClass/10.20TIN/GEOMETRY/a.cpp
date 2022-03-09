// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "geometry"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

bool test(int x , int a , int b , int s){

    int x1 = x - a , y1 = x - b;

    for(int i = 1 ; i <= sqrt(s) ; i++){
        if(s % i != 0)
            continue;
        int n = i , m = s / i;
        if((x1 >= n && y1 >= m)||(x1 >= m && y1 >= n))
            return true;
    }

    return false;


}

void solve(){

    int a , b , s;
    cin >> a >> b >> s;

    int l = 1 , r = 1000000001 , mid , res = INF;

    while(l <= r){
        mid = (l + r) / 2;
        if(test(mid , a , b ,s)){
            res = min(res , mid);
            r = mid - 1;
        }else 
            l = mid + 1;
    }

    if(res != INF) cout << res << endl;
    else cout << -1 << endl;
}

int32_t main(){
	//FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}