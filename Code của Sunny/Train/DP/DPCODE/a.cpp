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

string cong(string a, string b){
    while(a.size() < b.size())
        a = '0' + a;
    while(a.size() > b.size())
        b = '0' + b;

    reverse(a.begin() , a.end());
    reverse(b.begin() , b.end());

    string r = "";

    int nho = 0 , cong;
    for(int i = 0 ; i < a.size() ; i++){
        cong = (a[i] - '0') + (b[i] - '0') + nho;
        nho = cong / 10;
        cong %= 10;

        r += cong + '0';
    }
;
    if(nho >= 1)
        r += '1';

    reverse(r.begin() , r.end());

    return r;
}

string dp[5005];

void solve(){

    string s;
    cin >> s;
    if(s == "0")
        exit(0);

    s = '$' + s;

    dp[0] = "0";
    dp[1] = "1";

    dp[2] = "0";
    if(s[2] != '0') dp[2] = "1";
    if(((s[1] == '1') || (s[1] == '2' && s[2] >= '0' && s[2] <= '6')))
        dp[2] = cong(dp[2] , "1");

    for(int i = 3 ; i < s.size() ; i++){
        if(s[i] != '0') dp[i] = dp[i-1];
        else dp[i] = "0";
        if((s[i-1] - '0') * 10 + s[i] - '0' >= 10 && (s[i-1] - '0') * 10 + s[i] - '0' <= 26)
            dp[i] = cong(dp[i] ,dp[i-2]);

    }

    cout << dp[s.size() - 1] << endl;

}

int32_t main(){
	FileInput();
	fast();

	int t = INF;

    while(t--)
	    solve();
	return 0;
}
