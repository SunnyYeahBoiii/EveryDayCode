// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

char mat[10000][10001];
int len[1000001];
void solve(){
	int a;
	cin >> a;

	string s;
	cin >> s;
	//cout << s<< endl;
	int i = 1 , j = 1;
	for(int l = 0 ; l < s.size() ; l++){
		if(s[l] == '#'){
			j++;
			i = 1;
			//cout << endl;
			continue;
		}
		int a = s[l];
		//cout << a << endl;
		int cur = 1;
		while(a > 0){
			mat[j][i] = (char)((a % 2) + '0');
			a /= 2;
			//cout << mat[j][i];
			i++;
			len[j]++;
		}

	}
	int leng = INT_MAX;
	for(int l = 1 ; l <= j ; l++)
		leng = min(leng , len[l]);

	int cnt1 = 0 , cnt2 = 0;

	for(int l = 1 ; l <= j ; l++){
		for(int k = 1 ; k <= leng ; k++){
			if(mat[l][k] == '1')
				cnt1++;
			else cnt2++;
		}
	}
	cout << j << " " << leng << endl;
	cout << fixed << setprecision(9)<< cnt1 / (double)cnt2 << endl;

}

int32_t main(){
        //ios_base::sync_with_stdio(false);
        //cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
