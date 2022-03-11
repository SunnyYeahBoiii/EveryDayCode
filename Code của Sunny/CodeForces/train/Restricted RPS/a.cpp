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

        int r , p , s , n;
        cin >> n >> r >> p >> s;
        string b;
        cin >> b;
        map<char , int> cnt;
        
        for(int i = 0 ; i < b.size() ; i++)
            cnt[b[i] + 'a' - 'A']++;

        int res = min(r , cnt['s']) + min(p , cnt['r']) + min(s , cnt['p']);
        if(2 * res >= n)
            cout << "YES" << endl;
        else{cout << "NO" << endl;return;}

        string t;

        for(int i = 0 ; i < b.size() ; i++){
            if(b[i] == 'R' && p > 0){
                    t += 'P';
                    p--;
            }else if(b[i] == 'P' && s > 0){
                    t += 'S';
                    s--;
            }else if(b[i] == 'S' && r > 0){     
                    t += 'R';
                    r--;
            }else t += '%';
        }

        for(int i = 0 ; i < b.size() ; i++){
            if(t[i] == '%'){
                if(r > 0){
                    t[i] = 'R';
                    r--;
                }
                else if(p > 0){
                    t[i] = 'P';
                    p--;
                }
                else if(s > 0){
                    t[i] = 'S';
                    s--;
                }
            }
        }

        cout << t << endl;
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