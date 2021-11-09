// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal:
- Dem Phan Phoi
- Count[a] > 0 => Result += Count[a] - 1;
*/

#include "iostream"
#include "map"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
//#define int long long
#define endl "\n"

void solve(){
	int n;
	scanf("%d" , &n);
	map<long long , int> cnt;
	long long a; 
	int res = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		cnt[a]++;
	}

	for(auto p : cnt){
		long long u = p.first;
		int v = p.second;
		if(v > 0)
			res += v-1;
	}

	printf("%d\n" , res);
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        

