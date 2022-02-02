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

int calc(int l , int r , int n){    
    int x = r - l + 1;

    return (x * (x + 1)) / 2;
}

void solve(){

    int n , s;
    cin >> n >> s;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int l = 0 , sum = 0 , res = 0;

    for(int r = 0 ; r < n ; r++){
        sum += a[r];

        while(sum > s){
            sum -= a[l];
            l++;
        }

        int add = calc(l , r , n);
        if(sum <= s)res += add;
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