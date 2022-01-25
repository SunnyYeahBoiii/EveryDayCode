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

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    map<int , int> cnt;

    for(int i = 0 ; i < n ; i++)
        cnt[a[i]]++;

    for(auto it : cnt){
        if(it.second == 1)
            for(int i = 0 ; i < n ; i++)
                if(a[i] == it.first){
                    cout << i+1 << endl;
                    return;
                }
    }

    return;

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