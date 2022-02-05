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
    string s;
    vector<int> a(m);

    map<char , int> pref , res;

    cin >> s;

    for(int i = 0 ; i < m ; i++){
        cin >> a[i];
        a[i]--;
    }

    a.push_back(n-1);
    m++;

    sort(a.begin() , a.end());

    int cur = 0;

    for(int i = 0 ; i < n ; i++){
        pref[s[i]]++;
        while(cur < m && a[cur] <= i){
            for(int j = 'a' ; j <= 'z' ; j++)
                res[j] += pref[j];
            cur++;
        }
    }


    for(int i = 'a' ; i <= 'z' ; i++)
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