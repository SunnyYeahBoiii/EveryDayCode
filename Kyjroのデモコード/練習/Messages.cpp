#include<bits/stdc++.h>
using namespace std;
int n,m;
int f[101][101];
int c[101][101];
int p[101];

void caculate(int i,int j){
	f[i][j] = 0;
	for(int m = 1; m <=i;m++)
		if (p[i] > p[i-m] + c[m][j]){
			p[i] = p[i-m] + c[m][j];
			f[i][j] = m;
		}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <=n;i++)
		for(int j = 1;j <=m;j++)
			cin >> c[i][j];
	memset(f,0,sizeof(f));
	p[0] = 0;
	for(int i= 1;i <=n;i++){
		p[i] = c[i][1];
		f[i][1] = i;
	}
	for(int j =2; j < m;j++)
		for(int i =n;i >0;i--){
             caculate(i,j);
		}
	f[n][m] = 0;
	for(int l = 1; l <=n;l++)
		if (p[n] > p[n-l] + c[l][m]){
			p[n] = p[n-l] + c[l][m];
			f[n][m] = l;
				}
    cout << p[n];
	int i =n,j;
	for(int j = m;j> 0;j--){
		p[j] = f[i][j];
		i =i - f[i][j];
	}
	for(i = 1;i <=m;i++)
		cout << "\n" << p[i];
	return 0;
}
