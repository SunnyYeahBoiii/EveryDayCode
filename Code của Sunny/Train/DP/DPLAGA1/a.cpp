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
    //#define endl "\n"
    #define INF 1 << 30

    string dp[210];

    string cong(string a, string b){
        
        reverse(a.begin() , a.end());
        reverse(b.begin() , b.end());
        
        while(a.size() < b.size())
            a += '0';

        while(b.size() < a.size())
            b += '0';

        int rem = 0 , plus;

        string res = "";
        int n = a.size();

        for(int i = 0 ; i < n ; i++){
            plus = (a[i] - '0') + (b[i] - '0') + rem;
            rem = 0;
            if(plus > 9){
                rem = 1;
                plus %= 10;
            }

            res += (plus + '0');
        }

        if(rem == 1){
            res += '1';
        }

        reverse(res.begin() , res.end());

        return res;
    }

    void gen(){
        dp[1] = "1";
        dp[2] = "2";

        int n = 200;

        for(int i = 3 ; i <= n ; i++)
            dp[i] = cong(dp[i-1] , dp[i-2]);
    }

    void solve(){

        int n;
        cin >> n;
        cout << dp[n] << endl;;

    }

    int32_t main(){
        //FileInput();
        fast();    
        gen();
        int t;
        cin>>t;
        while(t--)
        solve();
        return 0;
    }