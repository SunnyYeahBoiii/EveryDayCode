#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"

void solve(){
	string a;
	cin >> a;
	int cnt1 = 0 , cnt2= 0 , n = a.size();
	for(int i = 0 ; i < a.size()-1 ; i++){
		string t = "";
		t += a[i];
		t += a[i+1];
		if(t == "ab")
			cnt1++;
		else if(t == "ba") cnt2++;
	}

	string t = "";
	if(cnt1 > cnt2){
		t += a[0];
		t += a[1];
		if(t == "ab"){
			a[0] = 'b';
			t = "";
			cnt1--;
		}
		t = "";
		if(cnt1 > cnt2 && a.size() > 2){
			t += a[n-3];
			t += a[n-2];
			t += a[n-1];
			if(t == "bab"){
				a[n-1] = 'a';
				cnt1--;
			}
		}
		cout << a << endl;
	}else if(cnt2 > cnt1){
		t = "";
		t+=a[0];
		t+=a[1];
		if(t == "ba"){
			a[0] = 'a';
			t = "";
			cnt2--;
		}
		t= "";
		if(cnt2 > cnt1 && a.size() > 2){
			t+=a[n-3];
		       	t+=a[n-2];
			t+=a[n-1];
			if(t == "bba"){
				a[n-1] = 'b';
				cnt2--;
			}
		}
		cout << a << endl;
	}else cout << a << endl;
	cout << cnt1 << " " << cnt2 << endl;
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
