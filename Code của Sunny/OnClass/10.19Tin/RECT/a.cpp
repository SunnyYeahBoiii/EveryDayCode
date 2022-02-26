// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "RECTSMAX"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

int n , m;
int a[505][505];

int kadane(vector<int>& arr){
    int res = -INF , cur = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        cur += arr[i];
        if(cur < 0)
            cur = 0;
        else if(cur > res)
            res = cur;
    }

    if(res == -INF){
        int minn = -INF;
        for(int i = 0 ; i < arr.size() ; i++)
            minn = min(minn , arr[i]);
        return minn;
    }

    return res;
}

void solve(){

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin >> a[i][j];

    vector<int> arr(m , 0);

    int res = -INF;

    for(int i = 0 ; i < n ; i++){
        arr.assign(m , 0);
        for(int j = i ; j < n ; j++){
            for(int k = 0 ; k < m ; k++)
                arr[k] += a[j][k];

            int t = kadane(arr);
            res = max(res , t);
        }
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