#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

string res[50006];

int stringToNum(char c)		// chuyen char sang so
{
	return c - '0';
}

char numToString(int n)		// chuyen so sang char
{
	return (char)(n+48);
}

void chuanHoa(string &a, string &b)	// lam 2 xau co do dai bang nhau
{
	int l1 = a.length(), l2 = b.length();
	if (l1 >= l2)
	{
		b.insert(0, l1-l2, '0');	// chen vao dau cua b cac ky tu '0'
	}
	else
	{
		a.insert(0, l2-l1, '0');	// chen vao dau cua a cac ky tu '0'
	}
}

string sum(string a, string b)	// tong 2 so
{
	string s = "";
	chuanHoa(a,b);		// chuan hoa
	int l = a.length();

	int temp = 0;
	for (int i=l-1; i>=0; i--)	// duyet va cong
	{
		temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;	// tinh tong tung doi mot
		s.insert(0,1,numToString(temp%10));			// gan phan don vi vao
		temp = temp/10;		// lay lai phan hang chuc
	}
	if (temp>0)	// neu hang chuc > 0 thi them vao KQ
	{
		s.insert(0,1,numToString(temp));
	}
	return s;
}


void init(){
	res[1] = "1";
	res[2] = "2";
	for(int i = 3 ; i <= 50005 ; i++){
		res[i] = sum(res[i-1] , res[i-2]);
	}
}

void solve(){
	int n;
	cin >> n;
	cout << res[n] << endl;
}

int main(){
	int t;
	init();
	cin >> t;
	while(t--) solve();
	return 0;
}
