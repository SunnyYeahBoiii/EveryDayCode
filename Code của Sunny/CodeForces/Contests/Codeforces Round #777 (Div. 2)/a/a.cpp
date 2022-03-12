
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
#define INF LLONG_MAX

string bigger(string& a, string& b){
	if(a.size() > b.size())
		return a;
	else if(a.size() < b.size())
		return b;
	else{
		for(int i = 0 ; i < a.size() ; i++){
			if(a[i] > b[i])
				return a;
			else if(a[i] < b[i])
				return b;
		}
	}

	return a;
}

void solve(){
	int n;
	cin >> n;

	int back = n;

	string s , s1;

	int i = 1;
	while(n > 0){
		s += i + '0';
		i = abs(3 - i);
		n -= i;
	}

	n = back;
	i = 2;
	while(n > 0){
		if(n - i < 0)
			break;
		s1 += i + '0';
		i = abs(3 - i);
		n -= i;
	}

	cout << bigger(s , s1) << endl;
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