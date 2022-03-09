// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "ACM"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

struct info{
    int a , b;
};

bool cmp1(info& a , info& b){
    return a.a - a.b < b.a - b.b;
}

vector<info> a;

void solve(){
    int n;
    cin >> n;
    a.resize(n*2);

    for(int i = 0 ; i < n*2 ; i++)
        cin >> a[i].a >> a[i].b;

    sort(a.begin() , a.end() , cmp1);

    int res = 0;
    for(int i = 0 ; i < n ; i++)
        res += a[i].a;
    for(int i = n ; i < 2 * n ; i++)    
        res += a[i].b;

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