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

int Try(int x , vector<int> a){

    int poi = 0;

    int sot = a[x];
    a[x] = 0;

    int add = sot / 14;

    for(int i = 0 ; i < 14 ; i++)
        a[i] += add;
    
    int left = sot % 14;

    int idx = x+1;

    while(left > 0){
        idx %= 14;
        a[idx]++;
        idx++;
        left--;
    }

    for(int i = 0 ; i < 14 ; i++)
        if(a[i] % 2 == 0)
            poi += a[i];

    return poi;
}

void solve(){
    vector<int> a(14);

    for(int i = 0 ; i < 14 ; i++)
        cin >> a[i];

    int res = 0;

    for(int i = 0 ; i < 14 ; i++)
        res = max(res ,Try(i , a));

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