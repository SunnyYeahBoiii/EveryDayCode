// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX


void solve(){
    string s;
    cin >> s;

    int res = 11;

    for(int i = 1 ; i < pow(2 , 10) ; i++){
        int A = 0 , B = 0 , Aleft = 5 , Bleft = 5;
        for(int j = 0 ; j < 10 ; j++){
            if((i >> j) & 1){
                if(s[i] == '0')
                    break;
                if(j % 2 == 0)
                    A++;
                else B++;
            }else{
                if(s[i] == '1')
                    break; 
            }
            if(j % 2 == 0)
                Aleft--;
            else Bleft--;

            if(B > A + Aleft){
                res = min(res , j+1);
                break;
            }else if(A > B + Bleft){
                res = min(res , j+1);
                break;
            }
        }
    }

    cout << res << endl;
}

int32_t main(){
	FileInput();
	fast();     
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}