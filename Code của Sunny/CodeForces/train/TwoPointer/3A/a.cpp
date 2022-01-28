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

        int n , m;
        cin >> n >> m;

        vector<int> a(n) , b(m);

        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        for(int i = 0 ; i < m ;i++)
            cin >> b[i];


        int i = 0 , j = 0;

    int res = 0;

        while(i < n && j < m){
            int temp = a[i];
            int cnt = 0 , cnt2 = 0;
            while(i < n && a[i] == temp){
                cnt++;
                i++;
            }

            while(j < m && b[j] < temp)
                j++;

            while(j < m && b[j] == temp){
                cnt2++;
                j++;
            }

            res += cnt * cnt2;
            //cout << cnt * cnt2 << endl;
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