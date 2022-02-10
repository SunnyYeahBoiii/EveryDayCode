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

int n;
vector<int> a , chose;
int res = INF;

void update_Result(){
    int l = 0 , r = 0;
    for(int i = 0 ; i < n ; i++)
        if(chose[i] == 0)
            r += a[i];
        else l += a[i];

    res = min(res , abs(r-l));
}

void attemp(int x){

    for(int i = 0 ; i < 2 ; i++){
        chose[x] = i;

        if(x < n-1)
            attemp(x+1);
        else
            update_Result();
    }

}

void solve(){

    cin >> n;
    a.resize(n);
    chose.resize(n);

    for(int i = 0 ;  i < n ; i++)
        cin >> a[i];

    attemp(0);

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