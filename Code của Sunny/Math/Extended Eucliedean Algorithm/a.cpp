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

pair<int , int> eea(int a,  int b){
    pair<int , int> aa = {1 , 0} , bb = {0 , 1} , rr;
    int r;

    while(b > 0){
        r = a % b;
        a = b;
        b = r;

        rr = {aa.first % bb.first , aa.second % bb.second};
        aa = bb;
        bb = rr;
    }

    return aa;
}

void solve(){
    int a , b;
    cin >> a >> b;
    pair<int , int> res = eea(a , b);
    cout << res.first << " " << res.second << endl; 
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