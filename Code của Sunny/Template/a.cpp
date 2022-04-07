/*
SunnyYeahBoi aka MinhPhuongVu
It's My Time To Shine Bois
*/
#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define int ll
#define endl "\n"

const int INF = LLONG_MAX;
const int LOW = LLONG_MIN;
const int MOD = 07032006;

// BITWISE-------------------------------------

template <typename x>
    inline void ONBIT(x & a , x b){
        a = a | (1 << b);
    }

template <typename x>
    inline void REVBIT(x & a , x b){
        a = a ^ (1 << b);
    }

template<typename x>
    inline bool ISON(x & a , x b){
        return ((a >> b) & 1);
    }

//---------------------------------------------

// NUMERIC-------------------------------------

template <typename x>
    inline x gcd (x a , x b){
        x r;
        while(b > 0){
            r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

template <typename x>
    inline x bcnn (x a , x b){
        return a / gcd(a , b) * b;
    }

template <typename x>
    inline x pow_mod(x a , x b){
        if(b <= 0)
            return 1;
        if(b == 1)
            return a;

        int t = pow_mod(a , b / 2);
        if(b % 2 == 0)
            return (t * t) % MOD;
        else return ((t * t) % MOD * a) % MOD;
    }

// REMEMBER A ^ P-2 = A ^ -1 (MOD P)

//---------------------------------------------

void FileInput(string s){
    if(s == "")
        return;
    freopen((s + ".INP").c_str() , "r" , stdin);
    freopen((s + ".OUT").c_str() , "w" , stdout);
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
}

void solve(){

}

void multi(){
    int t;
    cin >> t;
    while(t--)
        solve();
}

signed main(){
	FileInput("");
	fastIO();
	//multi();
	solve();
	return 0;
}
