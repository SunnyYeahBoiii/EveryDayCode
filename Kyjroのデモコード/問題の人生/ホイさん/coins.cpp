#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res,a[1000000],b[100000],c[100000];
	int m;
	cin >> n >> m;
	for(int i = 0 ; i < n;i++)
		cin >> a[i];
	for(int i =0; i < n;i++)
		cin >> b[i];
	for(int i  = 0; i < n;i++)
		c[i] = b[i] - a[i];
	sort(c,c+n);
	for(int i= 0; i < n;i++)
		if (c[i] <=m) 
			m += a[i];
		else 
			break;
	cout << m;
	return 0;
}
