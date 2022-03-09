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

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    sort(a.begin() , a.end());

    int aa = a[0] * a[1] * a[2] * a[3] * a[4];
    int bb = a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5];
    int cc = a[0]  * a[1] * a[n-1] * a[n-2] * a[n-3];
    int dd = a[0] * a[1] * a[2] * a[3] * a[n-1];

    cout << aa << " " << bb << " " << cc << " " << dd << endl;
    cout << max(aa , max(bb , max(cc , dd))) << endl;
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
