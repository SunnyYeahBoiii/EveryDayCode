// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "SEQINC"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int n;
vector<int> a;

void solve(){

    cin >> n;
    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    deque<int> arr;
    arr.push_back(a[0]);

    for(int i = 1 ; i < n ; i++){
        if(a[i] < arr.front()){
            arr.push_front(a[i]);
            continue;
        }
        if(a[i] > arr.back()){
            arr.push_back(a[i]);
            continue;
        }
        int x = lower_bound(arr.begin() , arr.end() , a[i]) - arr.begin();
        arr[x] = a[i];
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