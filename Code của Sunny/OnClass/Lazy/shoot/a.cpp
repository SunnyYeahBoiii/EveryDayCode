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

int chose[40];
int res = 0 , n;

void xuli(){
    bool flag1 = false , flag2 = true;

    for(int i = 0 ; i < n ; i++){
        if(chose[i] == chose[i+1]){
            if(chose[i] == 0)
                return;
            else if(chose[i] == 1)
                flag1 = true;
        }
    }

    if(flag1)++res;
}

void dq(int x){
    if(x > n){
        xuli();
        return;
    }

    if(x > 1)
    if(chose[x-1] == 0){
        chose[x] = 1;
        dq(x + 1);
        return;
    }

    for(int i = 0 ; i < 2 ; i++){
        chose[x] = i;
        dq(x + 1);
    }

}

void solve(){
    cin >> n;
    n--;
    dq(0);
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