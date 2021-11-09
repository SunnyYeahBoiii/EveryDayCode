#include "bits/stdc++.h"

using namespace std;

#define NAME "prjchain"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

struct info{
	int p , e;
	double earn;
};

bool cmp(info a , info b){
	/*if(a.p < b.p)
		return true;
	else if(a.p > b.p)
		return false;
	else{
		if(a.e < b.e)
			return true;
		else return false;
	}*/
	return a.e > b.e;
}

void solve(){
	int n;
	cin >> n;
	info a[n];
	for(int i = 0 ; i < n ; i++){
		cin >>a[i].p;
	}
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].e;
		a[i].earn = a[i].e - a[i].p;
	}

	sort(a , a+n , cmp);

	int cur = a[0].p , First = a[0].p;
	for(int i = 0 ; i < n ; i++){
		//cout << i << " " << First << endl;
		cur -= a[i].p;
		if(cur < 0){
			First += -(cur);
			cur = 0;
		}
		cur += a[i].e;
	}

	cout << First << endl;

	//for(int i = 0 ; i < n ; i++)
	//	cout << a[i].p << " " << a[i].e << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}
            
