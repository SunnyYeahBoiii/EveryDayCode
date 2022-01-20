// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "MINGROUP1"
#define NAME2 "MINGROUP2"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME2".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){

    int n;
    cin >> n;
    vector<int> a(n , 0) , pref(n , 0);

    int count =0;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        if(a[i] == 1)
            count++;
    }
    if(a[0] == 1)
        pref[0] = 1;

    for(int i = 1 ; i < n ; i++){
        if(a[i] == 1)
            pref[i] = pref[i-1] + 1;
        else pref[i] = pref[i-1];
    }

    //int count = pref[n-1];
    cout << count << endl;
    int res = pref[count-1];
    //cout << pref[count-1] << endl;
    for(int i = 1 ; i + count - 1 < n ; i++){
        int test = pref[i+count-1] - pref[i-1];
        //cout << test << endl;
        res = max(res , test);
    }


    //cout << count - res << endl;
}

int32_t main(){
	FileInput();
	fast();    

	solve();
	return 0;	
}
