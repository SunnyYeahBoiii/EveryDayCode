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

int n , k , res = 0;

vector<int> a;
vector<int> chose;

bool check(){

    int sum[k+1];

    for(int i = 0 ; i <= k ; i++)
        sum[i] = 0;

    for(int i = 0 ; i < n ; i++){
        sum[chose[i]] += a[i];
    }

    for(int i = 1 ; i < k ; i++)
        if(sum[i] != sum[i+1])
            return false;

    for(int i = 0 ; i < n ; i++)
        cout << chose[i] << " ";
    cout << endl;

    return true;

}

void backtrack(int x){

    for(int i = 1 ; i <= k ; i++){
        chose[x] = i;

        if(x < n-1)
            backtrack(x+1);
        else
            if(check()) res++;

    }

}

void solve(){

    cin >> n >> k;

    a.resize(n);
    chose.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    backtrack(0);

    cout << res / k << endl;
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