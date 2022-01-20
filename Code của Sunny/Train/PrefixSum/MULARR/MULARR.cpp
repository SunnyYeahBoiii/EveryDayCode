#include "bits/stdc++.h"

using namespace std;

#define NAME "MULARR"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
//#define endl "\n"
#define INF 1 << 30

int a[1000005];

void solve(){

    int n;
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    int res = 0;

    for(int i = 1 ; i <= n ; i++){
        for(int j = i+1 ; j <= n ; j++)
            res += a[i] * a[j];
    }

    cout << res << endl;
}

int32_t main(){
	FileInput();
	fast();    

	solve();
	return 0;	
}
