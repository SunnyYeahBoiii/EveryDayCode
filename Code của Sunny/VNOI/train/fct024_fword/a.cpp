// Link : https://oj.vnoi.info/problem/fct024_fword
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

vector<string> word;
int n , m , k , x;


void solve(){
    cin >> n >> m >> k >> x;

    string def;
    cin >> def;

    word.resize(m*2);

    for(int i = 0 ; i < m ; i++){
        cin >> word[i];
        sort(word[i].begin() , word[i].end());
        //cout << word[i] << endl;
    }

    vector<int> it(m*2 , 0);

    while(x > 1){

        int l = 0 , r = m-1 , mid , best = 0;

        while(l <= r){
            mid = (l + r) / 2;

            if(pow(k , mid) <= x){
                l = mid + 1;
                best = max(best , mid);
            }else   
                r = mid - 1;
        }

        it[m - best - 1]++;
        x -= pow(k , best);
        //cout << x << " " << best << " " << pow(k , best) << endl;

    }

    int cur = 0;

    /*
    for(int i = 0 ; i < m ; i++)
        cout << it[i] << " ";
        cout << endl;
    */

    for(int i= 0 ; i < n ; i++){
        if(def[i] == '#'){
            def[i] = word[cur][it[cur]];
            cur++;
        }
    }

    cout << def << endl;

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