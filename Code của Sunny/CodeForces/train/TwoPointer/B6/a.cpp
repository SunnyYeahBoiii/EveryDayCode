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

    int n , k;

    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    multiset<int> count;
    int l = 0 , res = 0;

    for(int r = 0 ; r < n ; r++){
        count.insert(a[r]);
        int min = -INF , max = INF;
        min = *count.begin();
        max = *count.rbegin();
        while(max - min > k){
            count.erase(count.find(a[l]));
            //cout << "d " << a[l] << " ";
            l++;
            if(!count.empty()){
                min = *count.begin();
                max = *count.rbegin();
            }
            //cout << l << " " << max << " " << min << endl;
        }
        //cout << r << " " << l << " " << max << " " << min << endl;
        
        /*
        for(auto s : count)
            cout << s << " ";
        cout << endl;
        */

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

/*

7 3
2 6 4 3 6 8 9

*/