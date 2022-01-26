// Link : http://vinhdinhcoder.net/Problem/Details/4671
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

vector<int> girls , boys;

void solve(){

    int n,m;
    cin >> m >> n;

    girls.resize(n);
    boys.resize(m);

    for(int i = 0 ; i < m ; i++)
        cin >> boys[i];

    for(int i = 0 ; i < n ; i++)
        cin >> girls[i];

    sort(boys.begin() , boys.end());
    sort(girls.begin() , girls.end());

    int i = 0 , j = 0 , cnt = 0;

    while(i < m && j < n){
        if(boys[i] > girls[j]){
            cnt++;
            i++;
            j++;
        }else{
            cout << "NO" << endl;
            return;
        }
    }

    if(cnt == m) cout << "YES" << endl;
    else cout << "NO" << endl;
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