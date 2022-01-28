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

void solve(){

    int n , m;
    cin >> n >> m;

    vector<int> a(n) , b(m);

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    for(int i = 0 ; i < m ; i++)
        cin >> b[i];

    vector<int> res;

    int i = 0 , j = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            res.push_back(a[i]);
            i++;
        }else{
            res.push_back(b[j]);
            j++;
        }
    }

    for(int s = i ; s < n ; s++){
        res.push_back(a[s]);
    }

    for(int s = j ; s < m ; s++)
        res.push_back(b[s]);

    for(int i = 0 ; i < res.size() ; i++)
        cout << res[i] << " ";
    cout << endl;
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