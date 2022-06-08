// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/*
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "a"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME"_trau.out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

struct q{
    int v , left , idx;
};

int n;
vector<int> h , t , res;
void solve(){
    cin >> n;
    h.resize(n);t.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> h[i];

    for(int i = 0 ; i < n ; i++)
        cin >> t[i];

    if(n <= 10000){
    for(int i = 0 ; i < n; i++){
        int left = t[i] , cur = h[i];
        bool found = false;
        for(int j = i+1 ; j < n ; j++){
            if(left == 0){
                //cout << cur << " " << i << endl;;
                cout << cur << " ";
                found = true;
                break;
            }
            if(h[j] > cur){
                left--;
                cur = h[j];
            }
        }
        if(!found)
            cout << -1 << " ";
    }
    } else{
        vector<q> a;
    for(int i = 0 ; i < n ; i++){
        if(!a.empty()){
            while(a[0].left == 0){
                res[a[0].idx] = a[0].v;
                //cout << a[0].idx << " " << a[0].v << endl;
                a.erase(a.begin());
            }
            for(int j = 0 ; j < a.size() ; j++){
                while(j + 1 < a.size() && a[j+1].left == 0){
                    res[a[j+1].idx] = a[j+1].v;
                    //cout << a[j+1].idx << " " << a[j+1].v << endl;
                    a.erase(a.begin() + j + 1);
                }
                if(a[j].v < h[i]){
                    a[j].left--;
                    a[j].v = h[i];
                }
            }
        }
        a.push_back({h[i] , t[i] , i});

        /*
        cout << "DEBUG" << endl;
        for(int i = 0 ; i < a.size() ; i++)
            cout << a[i].v << " " << a[i].left << " " << a[i].idx << endl;
        cout << "END" << endl;
        */
    }

    while(!a.empty()){
        if(a.back().left > 0)res[a.back().idx] = -1;
        else if(a.back().left == 0)
            res[a.back().idx] = a.back().v;
        a.pop_back();
    }

    for(int i = 0 ; i < n ; i++)
        cout << res[i] << " ";
    cout << endl;

    }
}

int32_t main(){
	FileInput();
    fast();
	//freopen("CRICKETS.inp" , "r" , stdin);
    //freopen("CRICKETS.out" , "w" , stdout);
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;
}