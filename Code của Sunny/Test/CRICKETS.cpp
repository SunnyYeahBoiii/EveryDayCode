// Link :
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/*
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "CRICKETS"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
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
    h.resize(n);
    t.resize(n);
    res.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> h[i];

    for(int i = 0 ; i < n ; i++)
        cin >> t[i];

    vector<q> a;
    for(int i = 0 ; i < n ; i++){
        if(!a.empty()){
            //a.erase(a.begin());
            int j = 0;
            while(j < a.size()){
                while(j < a.size() && a[j].left == 0){
                    res[a[j].idx] = a[j].v;
                    //cout << a[j].v << " " << a[j].idx << " " << a[j].left << endl;
                    a.erase(a.begin() + j);
                }
                if(a[j].v < h[i]){
                    a[j].left--;
                    a[j].v = h[i];
                }
                j++;
            }
        }
        
        q add;
        add.idx = i;
        add.left = t[i];
        add.v = h[i];
        a.push_back(add);
        
        /*
        cout << "DEBUG" << endl;
        for(int i = 0 ; i < a.size() ; i++)
            cout << a[i].v << " " << a[i].left << " " << a[i].idx << endl;
        cout << "END" << endl;
        */
        
    }

    while(!a.empty()){
        if(a.back().left >= 0) res[a.back().idx] = -1;
        a.pop_back();
    }

    for(int i = 0 ; i < n ; i++)
        cout << res[i] << " ";
    //cout << endl;
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
8
3 1 4 5 6 2 3 8
1 2 1 3 4 2 1 2
*/
