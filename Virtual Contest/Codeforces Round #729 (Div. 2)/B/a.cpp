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

map<int , bool> memo;
map<int , bool> solved;

bool check(int n , int a , int b){
    if(n <= 0)
        return false;
    
    if(solved[n])
        return memo[n];

    //cout << n << endl;

    if(n == 1 || n % b == 0)
        return true;
    else if(a != 1 && b != 0 && n % a == 0){ 
        bool x = (check(n/a , a , b) || check(n-b , a, b));
        solved[n] = true;
        memo[n] = x;
        return x; 
    }
    else if(a != 1 && n % a == 0){
        bool x = check(n/a , a , b);
        solved[n] = true;
        memo[n] = x;
        return x; 
    }
    else if(b != 0){
        bool x = check(n - b , a , b);
        solved[n] = true;
        memo[n] = x;
        return x;
    }
    else return false;
}

void solve(){
    int n , a , b;
    cin >> n >> a >> b;
    memo.clear();solved.clear();
    cout << ((check(n , a , b)) ? "Yes" : "No") << endl;
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