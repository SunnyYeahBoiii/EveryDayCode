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

const int MOD = 1000000007;

int n;
int res = 0;
vector<int> a;
map<int , int> cnt;

void solve(){
    cin >> n;
    a.resize(n);

    cnt[0] = 1;

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for(int i = 0 ; i < n; i++){
        for(int j = floor(sqrt(a[i])) ; j > 0 ; j--){
            if(a[i] % j == 0)cnt[j] = (cnt[j] + (cnt[j-1] % MOD)) % MOD;
        }

        cout << "DEBUG" << endl;
        for(auto& x: cnt)
            cout << x.first << " ";
        cout << endl;
        for(auto& x: cnt)
            cout << x.second << " ";
        cout << endl;
        cout << "END DEBUG" << endl;
    }

    //for(auto& x: cnt)
     //   cout << x.first << " " << x.second << endl;
    //cout << res << endl;
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