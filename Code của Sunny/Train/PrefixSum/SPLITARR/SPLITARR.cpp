// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "SPLITARR" // SPLITARR
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int pref[1000005] , a[1000005];

void solve(){

    int n;
    cin >> n;
    map<int, vector<int>> idx;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
        idx[pref[i]].push_back(i-1);
    }

    if(pref[n] % 3 != 0){
        cout << -1 << endl;
        return;
    }
    
    int sum1 = pref[n]/3 , sum2 = sum1 * 2;
    if(idx[sum1].size() >= 1 && idx[sum2].size() >= 1){
        cout << idx[sum1][0] << " " << idx[sum2][0] << endl;
        return;
    }else   cout << -1 << endl;

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