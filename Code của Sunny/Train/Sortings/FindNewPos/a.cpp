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

    int n , t;
    cin >> n >> t;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int x = a[t-1];

    int cnt = 0;

    for(int i = 0 ; i <= t-2 ; i++)
        if(a[i] == x)
            cnt++;

    sort(a.begin() , a.end());

    int after = lower_bound(a.begin() , a.end() , x) - a.begin();

    cout << after + cnt + 1 << endl;

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