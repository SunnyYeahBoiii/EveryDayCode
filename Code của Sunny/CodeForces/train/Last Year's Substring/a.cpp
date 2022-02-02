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
#define INF 1 << 30

void solve(){

    int n;
    string s;
    cin >> n;
    cin >> s;

    string first , end;

    for(int i = 0 ; i <= 4 ; i++){

        first = "";
        for(int j = 0 ; j < i ; j++){
            first += s[j];
        }

        end = "";
        for(int j = n - (4 - i) ; j < n ; j++)
            end += s[j];

        //cout << first << " " << end << endl;
        if(first + end == "2020"){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

}

int32_t main(){
	FileInput();
	fast();    
	
	int t;
    cin >> t;
    while(t--)
	
	solve();
	return 0;	
}