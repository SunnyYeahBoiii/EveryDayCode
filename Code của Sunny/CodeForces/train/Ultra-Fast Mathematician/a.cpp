// Link : https://codeforces.com/problemset/problem/61/A
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

    string s1 , s2;

    cin >> s1 >> s2;

    string s3 = "";

    for(int i = 0 ; i < s1.size() ; i++){
        int add = ((s1[i] - '0') + (s2[i] - '0')) % 2;
        s3 += add + '0';
    }

    cout << s3 << endl;
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