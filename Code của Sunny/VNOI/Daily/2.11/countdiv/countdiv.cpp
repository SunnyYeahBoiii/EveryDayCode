// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Miler Rabin Copied On Google .__.
*/

#include "iostream"
#include <map>
#include <tuple>
using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30
#define ll unsigned long long
pair<ll, ll> factor(ll n) {
    ll s = 0;
    while ((n & 1) == 0) {
        s++;
        n >>= 1;
    }
    return {s, n};
}

ll pow(ll a, ll d, ll n) {
    ll result = 1;
    a = a % n;
    while (d > 0) {
        if (d & 1) result = result * a % n;
        d >>= 1;
        a = ((a % n) * (a % n)) % n;
    }
    return result;
}

bool test(ll s, ll d, ll n, ll a) {
    if (n == a) return true;
    ll p = pow(a, d, n);
    if (p == 1) return true;
    for (; s > 0; s--) {
        if (p == n-1) return true;
        p = ((p % n) * (p % n)) % n;
    }
    return false;
}

bool miller(ll n) {
    if (n < 2) return false;
    if ((n & 1) == 0) return n == 2;
    ll s, d;
    tie(s, d) = factor(n-1);
    return test(s, d, n, 2) && test(s, d, n, 3) && test (s , d , n , 5) && test(s , d , n , 7) && test(s , d , n , 11) && test (s , d , n , 13) && test(s , d , n , 17) && test(s , d, n , 19) && test(s , d , n , 23);
}

bool prime(int a){
	if(a <= 1)
		return false;
	if(a % 2 == 0 || a % 3 == 0 || a % 5 == 0)
		return (a == 2 || a== 3 || a == 5);
	for(int i = 6 ; i*i <= a ; i+= 6){
		cout << i << endl;
		if(a % (i-1) == 0)
			return false;
		if(a % (i+1) == 0)
			return false;
	}

	return true;
}

void solve(){
	int n;
	cin >> n;
	map<int , int> k;
	k.clear();
	int i = 2;
	while(n > 1){
		cout << n << endl;
		if(prime(n)){
			k[n]++;
			int res = 1;
			for(auto a : k)
				if(a.second != 0)
					res *= a.second+1;
			cout << res-2 << endl;
			return;
		}
		while(n % i != 0){
			++i;
			cout << i << endl;
		}
		while(n % i == 0){
		    ++k[i];
			n /= i;
		}
	}	

	int res = 1;
	for(auto a : k)
		if(a.second != 0)
			res *= a.second+1; 
	cout << res-2 << endl;
}

int32_t main(){
        //ios_base::sync_with_stdio(false);
        //cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        

