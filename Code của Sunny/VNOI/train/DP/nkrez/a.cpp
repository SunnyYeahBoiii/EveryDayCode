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

struct info{
    int x , y;
};

vector<info> a;
vector<int> dp , maxx;
int n;

bool cmp(info a,  info b){
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

int bs(int g , int x){
    int l = g , r = n-1 , mid , best = INF;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid].x > x){
            r = mid - 1;
            best = min(mid , best);
        }else l = mid + 1;
    }

    return (best == INF) ? -1 : best;
}

void solve(){
    cin >> n;

    a.resize(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].x >> a[i].y;

    sort(a.begin() , a.end() , cmp);    
    dp.resize(n);
    maxx.resize(n);
    dp[n-1] = a[n-1].y - a[n-1].x;
    maxx[n-1] = dp[n-1];

    for(int i = n-2 ; i >= 0 ; i--){
        int idx = bs(i+1 , a[i].y);
        if(idx == -1)
            dp[i] = a[i].y - a[i].x;
        else
            dp[i] = maxx[idx] + a[i].y - a[i].x;
        maxx[i] = max(dp[i] , maxx[i+1]);
    }

    cout << *max_element(dp.begin() , dp.end()) << endl;
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