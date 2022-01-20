// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "numbers"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){

    int n;
    cin >> n;
    vector<int> a(n+1), odd(n+1) , even(n+1);

    odd[0] = 0;
    even[0] = 0;
    for(int i = 1 ; i <= n ; i++){       
        cin >> a[i];
        odd[i] = odd[i-1];
        even[i] = even[i-1];
        if(a[i] % 2 == 0)
            even[i]++;
        else odd[i]++;
    }

    for(int i = 1 ; i <= n ; i++){
        if(even[i-1] == even[n] - even[i] || odd[i-1] == odd[n] - odd[i]){
            cout << i-1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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