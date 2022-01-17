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

    int n , k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int maxi = *max_element(a.begin() , a.end());

    for(int i = 0 ; i < n ; i++){
        if(k < maxi - a[i]){
            cout << "NO" << endl;
            return;
        }
        k -= maxi - a[i];
        a[i] = maxi; 
    }

    if(k == 0){
        cout << "YES" << endl;
    }else{
        if(k % n == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

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