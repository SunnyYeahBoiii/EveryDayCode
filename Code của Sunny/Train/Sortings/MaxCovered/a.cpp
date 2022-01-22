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

vector<pair<int , int>> a;
int n;

bool cmp(pair<int , int> a , pair<int , int> b){
    if(a.first == b.first)
        return a.second < b.second;
    else return a.first < b.first;
}

void solve(){

    cin >> n;

    a.resize(n*2);

    int d;
    for(int i = 0 ; i < n ; i++){
        cin >> d;
        a[i] = {d , 1};
    }

    for(int i = 0 ; i < n ; i++){
        cin >> d;
        a[i+n] = {d , -1};
    }

    sort(a.begin() , a.end() , cmp);

    int cur = 0 , res = 0 , s = -1 , e = -1 , ms = -1 , me = -1;


    for(int i = 0 ; i < 2*n ; i++){
        if(cur == 0){
            s = -1;
            e = -1;
        }
        cur += a[i].second;
        if(a[i].second == -1){
            e = a[i].first;
            if(cur+1 > res){
                res = cur+1;
                ms = s;
                me = e;
            }
        }else s = a[i].first;
        //cout << s << " " << e << " " << cur << endl;
    }

    cout << res << endl << ms << " " << me << endl;
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