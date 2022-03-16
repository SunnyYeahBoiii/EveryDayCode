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

const int MOD = 998244353;
int dp[505];
vector<int> a;
vector<int> pref;
int n;

int cal(int x , int r){

    int res = 0;
    // Trường hợp chỉ lấy các dãy con không có dấu -
    for(int i = 1 ; i <= x ; i++)
        for(int j = i+1 ; i <= x ; j++)
            res = (res + (pref[j] - pref[i-1]) % MOD) % MOD;
            
    // Trường hợp lấy dãy con có từ 1 -> r dấu trừ
    for(int i = 1 ; i <= x ; i++)
        for(int k = 1 ; k <= min(r , i + 1) ; k++)
            res = (res + (pref[i] - pref[k])) % MOD;

    return res;
}

void solve(){

    cin >> n;
    char x;
    a.resize(n+1);
    pref.push_back(0);
    for(int i = 1 ; i <= n ; i++){
        cin >> x;
        if(x == '+'){
            cin >> a[i];
            pref.push_back(pref.back() + a[i]);
        }
        else
            a[i] = -1;
    } 

    int res = 0;
    int minuss = 0 , pluss = 0;
    for(int i = 1 ; i <= n ; i++){
        if(a[i] == -1)
            minuss++;
        else pluss++;

        res = (res + cal(pluss , minuss)) % MOD;
    }
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