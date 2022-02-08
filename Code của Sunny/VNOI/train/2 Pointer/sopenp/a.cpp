// Link : https://oj.vnoi.info/problem/sopenp
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

int a[5000005];

void solve(){

    int n , l , u;
    cin >> n >> l >> u;

    int lo = 0 , cnt = 0 , res = 0;

    //sort(a.begin() , a.end());

    unordered_map<int , int> c;

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for(int hi = 0 ; hi < n ; hi++){
        c[a[hi]]++;

        if(c[a[hi]] == 1)
            cnt++;

        while(cnt > u){
            c[a[lo]]--;
            if(c[a[lo]] == 0)
                cnt--;

            lo++;
        }

        res += hi - lo + 1;
    
    }

    unordered_map<int , int> c2;

    int cnt2 = 0;

    lo = 0 , cnt = 0; int res2 = 0;

    for(int hi = 0 ; hi < n ; hi++){
        c2[a[hi]]++;

        if(c2[a[hi]] == 1)
            cnt++;

        while(cnt > l-1){
            c2[a[lo]]--;
            if(c2[a[lo]] == 0)
                cnt--;

            lo++;
        }

        res2 += hi - lo + 1;
    
    }

    cout << res - res2 << endl;
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
