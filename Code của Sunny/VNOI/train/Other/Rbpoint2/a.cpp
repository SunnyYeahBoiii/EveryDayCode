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

bool cmp(pair<int , int> a , pair<int , int> b){
    return a.first < b.first;
}

int bs(int x , vector<int>& a){
    int l = 0 , r = a.size() - 1, mid , best;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] <= x){
            best = mid;
            l = mid + 1;
        }else r = mid - 1;
    }

    return best;
}

void solve(){

    int n;
    cin >> n;

    vector<int> a(n) , b(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for(int i = 0 ; i < n ; i++)
        cin >> b[i];

    sort(b.begin() , b.end());

    b.push_back(INF);

    int res = INF;

    for(int i = 0 ; i < n ; i++){
        int x = *lower_bound(b.begin() , b.end() , a[i]);   
        int d = b[bs(a[i] , b)];
        cout << x << " " << d << endl;
        res = min(res , min(abs(a[i] - x) , abs(a[i] - d)));
    }

    cout << res << endl;
}

int32_t main(){
	FileInput();
	//fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}