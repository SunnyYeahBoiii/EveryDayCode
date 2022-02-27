// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "EXCURS"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int n;
vector<int> a , arr;

void solve(){

    cin >> n;

    int x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        if(x % 2 == 0) a.push_back(x);
    }

    if(a.size() == 0){
        cout << 0 << endl;
        return;
    }

    arr.push_back(a[0]);

    for(int i = 1 ; i < a.size() ; i++){
        if(a[i] > arr.back()){
            arr.push_back(a[i]);
            continue;
        }

        int idx = lower_bound(arr.begin() , arr.end() , a[i]) - arr.begin();
        arr[idx] = a[i];
    }

    cout << arr.size() << endl;
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