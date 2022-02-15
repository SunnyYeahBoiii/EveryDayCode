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

    int n , x;
    cin >> n >> x;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    bool flag = false;

    for(int i = 0 ; i < n ; i++){
        if(a[i] % x != 0){
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << -1 << endl;
        return;
    }

    int sum = 0;

    for(int i = 0 ; i < n ; i++)
        sum += a[i];

    if(sum % x != 0){
        cout << n << endl;
        return;
    }

    int l = 0 , r = n-1;

    while(l < n && (a[l] % x == 0 || a[l] == 0))
        l++;

    while(r >= 0 && (a[r] % x == 0 || a[r] == 0))
        r--;

    //cout << l << " " << r << endl;
    cout << max({l , n - l - 1 , r , n - r - 1}) << endl;
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
