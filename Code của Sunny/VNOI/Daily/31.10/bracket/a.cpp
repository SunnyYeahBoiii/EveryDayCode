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
	deque<char> arr;
	char a;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		arr.push_back(a);
	}
	int back = 0;
	int cnt = 0 , res = 0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == ')'){
			cnt--;
			if(cnt < 0){
				//cout << i << endl;
				res++;
				back++;
				//arr.erase(arr.begin() + i);
				arr.push_back(')');
				cnt = 0;
			}
		}else cnt ++;
	}

	if(cnt > 0 && back < cnt)
		res += cnt - back;

	cout << res << endl;
}


int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
