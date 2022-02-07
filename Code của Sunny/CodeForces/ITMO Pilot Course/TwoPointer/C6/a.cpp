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

map<char , int> cnta;
map<char , int> cnt;

bool gud(){
    for(char i = 'a' ; i <= 'z' ; i++){
        if(cnta[i] > cnt[i]){
            return false;
            //cout << cnta[i] << " " << cnt[i] << " " << i << endl;
        }
    }
    return true;
}

void solve(){

    int n , m;
    string a, b;
    cin >> n >> m;
    cin >> a;
    cin >> b;

    for(int i = 0 ; i < b.size() ; i++)
        cnt[b[i]]++;

    int l = 0 , res = 0;

    for(int r = 0 ; r < n ; r++){
        cnta[a[r]]++;

        while(!gud()){
            cnta[a[l]]--;
            l++;
        }

        res += r - l + 1;
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