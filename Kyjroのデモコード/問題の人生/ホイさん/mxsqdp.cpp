#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
	int a[1000][1000];
	int f[1000][1000];
	int maxx =0;
	cin >> n >> m;
	for(int i =1; i<=n;i++)
		for(int j =1; j <=m;j++){
			cin >> a[i][j];
			f[i][j] =1;
		}
	for(int i =2; i <=n;i++){
		for(int j = 2; j <=m;j++)
			if (a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1]){
				f[i][j] = min(min(f[i-1][j-1],f[i-1][j]),f[i][j-1])+1;
		    maxx = max(f[i][j],maxx);
			}
	}
	cout << maxx;

}
