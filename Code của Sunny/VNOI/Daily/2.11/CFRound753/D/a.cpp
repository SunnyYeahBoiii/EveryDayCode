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

struct info{
	int v;
	char color;
};

bool cmp(info a , info b){
	if(a.color < b.color)
		return true;
	else if(a.color > b.color)
		return false;
	else{
		if(a.color == 'B'){
			if(a.v < b.v)
				return true;
			else return false;
		}else{
			if(a.v > b.v)
				return true;
			else return false;
		}
	}
}

void solve(){
	int n;
	cin >> n;
	info a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i].v;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i].color;

	sort(a , a+n , cmp);
	int left = 1 , right = n , i = 0;
	bool mark[n+1];
	memset(mark , false , sizeof(mark));
	

	for(int i = 0 ; i < n ; i++){
		if(a[i].color == 'B'){
			if(left <= a[i].v){
				left++;
			}else{
				cout << "NO" << endl;
				return;
			}
		}else if(a[i].color == 'R'){
			if(right >= a[i].v){
				right--;
			}else{
				//cout << a[i].v << " " << right << endl;
				cout << "NO" << endl;
				return;
			}
		}
	}

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
