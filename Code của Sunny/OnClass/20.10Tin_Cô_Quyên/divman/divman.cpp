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

int n , sum = 0 , cnt = 0 , value = 0;
vector<int> a;

bool ok(int x){

    int cur = 0 , per = sum / x , count = 0;

    for(int i = 0 ; i < n ; i++){
        cur += a[i];
        if(cur == per){
            count++;
            cur = 0;
        }
        else if(cur > sum)
            return false;
    }

    if(count > cnt){
        cnt = count;
        value = per;
    }
    return true;
}

void solve(){

    cin >> n;
    a.resize(n);

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        sum += a[i];
    }

    int l = 0 , r = n+1 , mid;

    while(l <= r){
        int mid = (l + r) / 2;
        if(ok(mid)){
            l = mid + 1;
        }else r = mid - 1;
    }

    cout << cnt << " " << value << endl;
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