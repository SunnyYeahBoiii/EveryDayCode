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

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	pair<int , int> pref[n] , suff[n];
	pref[0] = {a[0] , 0};
	for(int i = 1 ; i < n ; i++){
		if(a[i] < pref[i-1].first)
			pref[i] = pref[i-1];
		else pref[i] = {a[i] , i};
	}
	
	suff[n-1] = {a[n-1] , n-1};
	for(int i = n-2 ; i >= 0; i--){
		if(a[i] < suff[i+1].first)
			suff[i] = suff[i+1];
		else suff[i] = {a[i] , i};
	}

	for(int i = 0 ; i < n ; i++){
		if(i == 0){
			if(a[i] + suff[i+1].second - 1 > suff[i+1].first){
				cout << i+1 << endl;
				return;
			}
		}else if(i == n-1){
			if(a[i] + n - pref[i-1].second - 2 > pref[i-1].first){
				cout << i+1 << endl;
				return;
			}
		}else{
			int cur = 0;
			bool left = false , right = false;
			cur = a[i] + i - pref[i-1].second - 1 ;
			cout << cur << endl;
			if(cur > pref[i-1].first){
				cur += pref[i-1].second;
				left = true;
				if(cur + suff[i+1].second - 1 > suff[i+1].first){
					cout << i+1 << endl;
					return;
				}
			}

			cur += suff[i+1].second -1;
			cout << cur << endl;
			if(cur > suff[i+1].first){
				cur += n -suff[i+1].second - 1;
				right = true;
				if(left == true){
					cout << i+1 << endl;
					return;
				}
				if(cur > pref[i-1].first){
					cout << i+1 << endl;
					return;
				}
			}
		}

	}
	cout <<"-1"<< endl;
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
