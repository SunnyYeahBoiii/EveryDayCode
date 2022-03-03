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

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i =0  ; i < n ; i++){
        cin >> a[i];
        if(a[i] < 0)
            a[i] = -1;
        else a[i] = 1;
    }

    int cur = 0 , cnt = 0;
    for(int i = 0 ; i < n ; i++){
        //cout << cnt << " " << endl;
        if(cur == 0){
            cur = a[i];
            cnt = 1;
        }else if(cur == -a[i]){
            cnt++;
            cur = a[i];
        }else{
            while(cnt > 0){
                //cout << i << " ";
                cout << cnt << " ";
                cnt--;
            }
            cur = a[i];
            cnt = 1;
        }
    }

    if(cnt > 0){
        while(cnt > 0){
                //cout << i << " ";
            cout << cnt << " ";
            cnt--;
        }
    }
    cout << endl;
}

int32_t main(){
	//FileInput();
	fast();     
	
	int t;
    cin >> t;
    while(t--)
	
	solve();
	return 0;	
}
    