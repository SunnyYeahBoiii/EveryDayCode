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

    int n , m , k;
    cin >> n >> m >> k;
    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for(int i = 0 ; i < n-1 ; i++){
        if(a[i] >= a[i+1]){
            if(a[i+1] - k >= 0)
                m += a[i] - a[i+1] + k;
            else m += a[i] - a[i+1];
            a[i] = max(0LL , a[i+1] - k);
        }else if(a[i+1] - a[i] > k){
            int x = (a[i+1] - a[i]) - k;
            if(x <= m)
                m -= x;
            else{
                cout << "NO" << endl;
                cout << x << " " << m << endl;
                return;
            }
            //cout << x << " " << m << endl;
        }
    }

    cout << "YES" << endl;
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