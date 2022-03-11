#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n){
	int s1 =0, s2 = 0;
	for(int i= 0; i< n;i++)
		s1 = s1  + a[i];
	for(int i = n-1;i >=0;i--)
	{
		s2 = s2 + a[i];
		s1 = s1 - a[i];
		if (s2 == s1)
			return i;
	}
	return -1;
}
int main(){
	int n,a[100000];
	cin >> n;
	for(int i =0; i <n;i++)
		cin >> a[i];
	cout << find(a,n);
	return 0;
}
