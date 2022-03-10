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
//#define endl "\n"
#define INF LLONG_MAX


void solve(){

    int n;
    cin >> n;

    vector<int> a(n);

    int s = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        s += a[i];
    }

    double k = s / (double)n;
    double x = k * (double)(n - 2);
    double f = (double)s - (double)x;

    int res = 0;
    map<int , int> cnt;

    if(f - floor(f) >= 0.0000000001){
        cout << "0" << endl;
        return;
    }

    for(int i = 0 ; i < n ; i++){
        res += cnt[f - (double)a[i]];
        cnt[a[i]]++;
    }

    cout << res << endl;
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