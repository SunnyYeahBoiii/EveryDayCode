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
#define INF 1 << 30

void solve(){

    int n , rr;
    cin >> n >> rr;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int l = 0 , res = 0;
    
    for(int r = 0 ; r < n ; r++){
        while(l+1 < n && a[r] - a[l+1] > rr)
            l++;

        if((a[r] - a[l]) > rr)
            res += l+1;
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