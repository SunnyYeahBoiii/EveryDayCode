#include<bits/stdc++.h>
using namespace std;
typedef string bignum_str;
void equal_length(bignum_str &a, bignum_str &b)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
}
        
int compare(bignum_str a, bignum_str b)
{
    equal_length(a, b);
    
    if (a < b)
        return -1;
    if (a > b)
        return 1;

    return 0;
}
bignum_str add(bignum_str a, bignum_str b)
{
    equal_length(a, b);
    
    int carry = 0;
    bignum_str res;
    for (int i = a.size() - 1; i >= 0; --i)
    {
       
        int d = (a[i] - '0') + (b[i] - '0') + carry;
        
        carry = d / 10; 
        res = (char)(d % 10 + '0') + res; 
    }
    
    if (carry)
        res = '1' + res;
        
    return res;
}
int main(){
	int n;
	string f[100000];
	cin >> n;
	f[1] = '1';
	f[2] = '2';
	for(int i= 3; i <= n;i++){
		f[i] = add(f[i-1],f[i-2]);
	}
	cout << f[n];
	return 0;
}
