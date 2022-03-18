#include <bits/stdc++.h>
using namespace std;
 
const int MN = 1000;
 
int M, N, A[MN+5][MN+5], res = 0;
 
bool kt(int d){
	for (int i = d; i <= M; i++)
		for (int j = d; j <= N; j++){
			int s = A[i][j]-A[i-d][j]-A[i][j-d]+A[i-d][j-d];
			if (s == 0 || s == d*d) return 1;
		}
	return 0;
}
 
int main(){
	cin >> M >> N;
	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++){
			cin >> A[i][j];
			A[i][j] += A[i-1][j]+A[i][j-1]-A[i-1][j-1];
		}
 
	int L = 1, R = min(M, N);
	while (L <= R){
		int M = (L+R)/2;
		if (kt(M)){
			res = M;
			L = M+1;
		}
		else R = M-1;
	}
	cout << res;
	return 0;
}