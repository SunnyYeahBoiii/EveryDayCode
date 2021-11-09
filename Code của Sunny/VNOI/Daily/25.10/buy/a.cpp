#include "bits/stdc++.h"

using namespace std;

void solve(){
	long long n;
	long long a ,b;
	cin >> n >> a >> b;

	// TH1 : mua all = loai a

	long long type1 = n*a;

	// TH2 : mua all = loai b neu le thi + 1 loai a

	long long type2 = (n/2)*b + (n%2)*a;
	//cout << (n/2)*b << " " << (n%2)*a << endl;
	cout << min(type1 , type2) << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
