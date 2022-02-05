// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n , m;
	cin >> n >> m;
	vector<int> a(n) , p(m);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];	
	for(int i = 0 ; i < m ; i++)
		cin >> p[i];
	sort(p.begin() , p.end());

	bool flag = true;

    while(true){

        flag = false;

        for(int i = 0 ; i < n-1 ; i++){
            if(a[i] > a[i+1]){
                if(!binary_search(p.begin() , p.end() , i+1)){
                    cout << "NO" << endl;
                    return;
                }
                swap(a[i] , a[i+1]);
                flag = true;
            }
        }
    
        if(!flag)
            break;
    }

    /*
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << " ";
    cout << endl;
    */

	cout << "YES" << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        int t;
	cin >> t;
	while(t--)
		solve();
        return 0;
}        