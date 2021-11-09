#include "bits/stdc++.h"

using namespace std;

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
	string res = "0";
	string cur = "0";
	for(int i = 1 ; i <= n ; i++){
		cur = cong(cur , to_stringh(i));
		res = cong(res , cur);
	}

	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}