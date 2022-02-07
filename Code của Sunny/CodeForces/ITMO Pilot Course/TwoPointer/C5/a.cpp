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

    int n , s;
    cin >> n >> s;

    vector<int> a(n) , b(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
        cin >> b[i];

    int l = 0 , sum = 0 , cost = 0 , res = -1;

    for(int r = 0 ; r < n ; r++){
        sum += a[r];
        cost += b[r];

        while(sum > s){
            sum -= a[l];
            cost -= b[l];
            l++;
        }
    
        res = max(res , cost);
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