//   Author : Phuong aka SunnyYeahBoiii
//   Day : Unknown

#include <bits/stdc++.h>

#pragma comment(linker, "/stack:227420978")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define endl "\n"

using namespace std;

void solve(){
	int n;
	scanf("%d" , &n);
	string res = "" , top = "123456790" , bot = "098765432";
	int n1 = (n-1)/9 , n2 = n - 9*n1;
    if(n > 9){
        for(int i = 0 ; i < n1 ; i++)
            cout << top;
    }

	if(n2-1 > 0){
        for (int i=1; i<=n2; i++)
            cout << i;
             
        for (int i=n2-1; i>1; i--)
            cout << i;
    }else if(n2-1 >= 1){
        for (int i=1; i<= n2-1; i++)
            cout << i;
    }
    cout << res;
	if(n >= 10){
		for(int i = 0 ; i < n1 ; i++){
			cout << bot;
		}
	}
    if(n2-1 > 0)
        cout << "1";
    else cout << n2;
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int t;
	scanf("%d" , &t);
	while(t--) solve();
	return 0;
}
