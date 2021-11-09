#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdsabest"
#define FileInput() freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);
#define int long long
#define endl "\n"

int to_num(char a){
	return a - '0';
}

string to_stringh(int a){
	string rev = "";
	while(a > 0){
		rev += (a%10+'0');
		a /= 10;
	}
	reverse(rev.begin() , rev.end());
	return rev;
}

string cong(string a, string b){
	reverse(a.begin() , a.end());
	reverse(b.begin() , b.end());
	while(a.size() < b.size())
		a += '0';
	while(b.size() < a.size())
		b += '0';

	int nho = 0 , congs;
	string res = "";
	for(int i = 0 ; i < a.size() ; i++){
		congs = to_num(a[i]) + to_num(b[i]) + nho;
		if(congs > 9){
			nho = 1;
			congs %= 10;
		}else nho = 0;
		res += (congs + '0');
	}
	if(nho == 1) res += '1';
	reverse(res.begin() , res.end());
	return res;
}

void solve(){
	int n;
	cin >> n;
	string  sum = "0";
	string a;

	for(int i = 0 ; i < n ;i++){
		cin >> a;
		sum = cong(sum , a);
	}	
	cout << sum;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//FileInput();
	solve();
	return 0;
}
