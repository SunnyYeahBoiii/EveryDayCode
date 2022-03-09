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

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int t = 0;

    for(int i = 0 ; i < pow(2 , n) ; i++){
        t = 0;
        for(int j = 0 ; j < n ; j++){
            if((i >> j) & 1){
                t = (t + a[j]) % 360;
            }else{
                t -= a[j];
                if(t < 0)
                    t = 360 + t;
            }
        }
        if(t == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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