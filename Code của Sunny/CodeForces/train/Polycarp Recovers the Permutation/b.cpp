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

void solve(){

    int n;
    cin >> n;

    deque<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    deque<int> res;
    int i = 0;

    if(a[0] != n && a[n-1] != n){
        cout << -1 << endl;
        return;
    }

    while(!a.empty()){
        if(i == 0){
            res.push_front(a.front());
            a.pop_front();
        }else{
            res.push_back(a.back());
            a.pop_back();
        }

        i = abs(1 - i);
    }

    for(int i = 0 ; i < n ; i++)
        cout << res[i] << " ";
        cout << endl;
}

int32_t main(){
	FileInput();
	fast();     
	int t;
    cin >> t;
    while(t--)
	solve();
	return 0;	
}