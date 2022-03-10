// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "lunarg"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

bool cmp(pair<int , int> a , pair<int , int> b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

void solve(){

    int n;
    cin >> n;

    vector<pair<int , int>> a(n);
    vector<int> dp(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin() , a.end() , cmp);

    int res = 1;

    dp[0] = 1;
    for(int i = 1 ; i < n ; i++){
        dp[i] = 1;
        for(int j = 0 ; j < i ; j++)
            if(a[i].first > a[j].second)
                dp[i] = max(dp[i] , dp[j] + 1);

        res = max(res , dp[i]);
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