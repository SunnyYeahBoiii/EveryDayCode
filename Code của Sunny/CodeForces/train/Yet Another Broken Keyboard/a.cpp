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

    int n , k;
    string s;
    cin >> n >> k;
    cin >> s;

    vector<char> a(k);

    for(int i = 0 ; i < k ; i++)
        cin >> a[i];

    int res = 0;
    int cur = 0;

    for(int i = 0 ; i < n ; i++){
        bool is = false;
        for(int j = 0 ; j < k ; j++)
            if(s[i] == a[j]){
                is = true;
                cur++;
                res += cur;
                break;
            }

        if(is == false)
            cur = 0;
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