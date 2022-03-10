// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "MOuseW"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX


void solve(){

    int n , k;
    cin >> n >> k;

    vector<int> a(n*10+1) , pref(n*10+1);
    deque<int> window;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        for(int j = 1 ; j < 10 ; j++)
            a[j * n + i] = a[i];
    }

    pref[0] = 0;
    for(int i = 1 ; i <= 10*n ; i++)
        pref[i] = pref[i-1] + a[i];

    int t = -INF;

    int res = -INF;

    for(int i = 0 ; i <= k ; i++)
        res = max(res , pref[i]);

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