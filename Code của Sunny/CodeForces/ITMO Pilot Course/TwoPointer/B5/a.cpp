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

    map<int , int> cnt;
    int num = 0;

    int l = 0;
    int res = 0;

    for(int i = 0 ; i < n ; i++){
        if(cnt[a[i]] == 0)
            num++;
        cnt[a[i]]++;
        while(num > k){
            cnt[a[l]]--;
            if(cnt[a[l]] == 0)
                num--;
            l++;
        }

        res += i - l + 1;
    }

    cout << res << endl;
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