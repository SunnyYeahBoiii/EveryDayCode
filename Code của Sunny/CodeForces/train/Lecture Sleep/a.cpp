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

    int n , k;
    cin >> n >> k;

    vector<int> a(n+1) , t(n+1) , x(n+1) , pref(n+1);

    x[0] = 0;
    pref[0] = 0;

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    for(int i = 1 ; i <= n ; i++){
        cin >> t[i];
        x[i] = x[i-1] + a[i];
        pref[i] = pref[i-1] + (a[i] * t[i]);
    }
    int res = -INF;

    for(int i = k ; i <= n ; i++){
        if(i == k){
            res = max(res , x[i] + pref[n] - pref[i]);
        }else if(i == n){
            res = max(res , pref[i - k] + x[n] - x[i-k]);
        }
        else{
            res = max(res , pref[i-k] + pref[n] - pref[i] + x[i] - x[i-k]);
        }
    }

    cout << res << endl;
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