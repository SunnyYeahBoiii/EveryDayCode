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

void solve(){
	int x , y;
	cin >> x >> y;
	string s;
	cin >> s;
	int bx = 1 , by = 1 , curx = 1 , cury = 1;
	for(int i = 0 ; i < s.size() ; i++){
		cout << "cur :" << curx << " " << cury << " " << bx << " " << by <<  endl;
		if(s[i] == 'U'){
			if(curx - 1 == 0){ 
				if ( bx == x){
					cout << bx << " " << by << endl;
					return;
				}else bx++;
			}else{
				curx--;
			}
		}

		if(s[i] == 'L'){
			if(cury - 1 == 0){
				if(by == y){
					cout << bx << " " << by << endl;
					return;
				}else by++;
			}else{
				cury--;
			}
		}

		if(s[i] == 'D'){
			if(curx == x){
				cout << bx << " " << by << endl;
				return;
			}
			else curx++;
		}

		if(s[i] == 'R'){
			if(cury == y){
				cout << bx<< " " << by << endl;
				return;
			}
			else cury++;
		}
	}	

	cout << bx << " " << by << endl;
	
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        int t;
	cin >> t;
	while(t--)	
	solve();
        return 0;
}        
