// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "EPICGAME"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int gcd(int a , int b){
    int m;
    while(b > 0){
        m = a % b;
        a = b;
        b = m;
    }

    return a;
}

void solve(){
    int a , b , n;
    cin >> a >> b >> n;

    int i = 0;
    while(n > 0){
        if(i == 0){
            int x = gcd(a , n);
            if(x > n){
                cout << '1' << endl;
                return;
            }
            i = abs(1 - i);
            n -= x;
        }else{
            int x = gcd(b , n);
            if(x > n){
                cout << '0' << endl;
                return;
            }
            i = abs(1 - i);
            n -= x;
        }
    }
    cout << abs(1 -i) << endl;
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