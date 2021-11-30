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

string a[100005];

void solve(){
	int n;
	map<string , bool> mark;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
		
	for(int i = 0 ; i < n ; i++){
		if(i == 0)
			mark[a[i]] = true;
		else{
			if(mark[a[i]] == true){
				cout << "NO" << endl << i+1 << endl;
				return;
			}else if(a[i][0] != a[i-1][a[i-1].size()-1]){
				cout << "NO" << endl << i+1 << endl;
				return;
			}else{
				mark[a[i]] = true;
			}
		}
	}

	cout << "YES" << endl;

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
