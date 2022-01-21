// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "games"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int n , m;
int res = 0 , cnt = 0;
vector<int> chose(21 , 0);
vector<int> a(21 , 0);

void check(){
    int left = m , right = 0 , count = 0;

    for(int i = 0 ; i < n ; i++){
        if(chose[i] == 1)
            left += a[i];
        else if(chose[i] == 2)
            right += a[i];
        
        if(chose[i] > 0)
            count++;
    }

    if(left == right){
        res++;
        cnt = max(count , cnt);
    }
}

inline void backtrack(int x , int left , int right , int count){
    for(int i = 0 ; i < 3 ; i++){
        chose[x] = i;

        if(chose[x] == 1)
            left += a[x];
        else if(chose[x] == 2){
            right += a[x];
        }
        
        if(chose[x] > 0)
            count++;

        if(x < n-1)
            backtrack(x+1 , left , right , count);
        else{
            /*
            for(int i = 0 ; i < n ; i++)
                cout << chose[i] << " ";
            cout << endl;
            cout << left << " " << right << endl;
            */
            if(left == right){
                res++;
                cnt = max(cnt , count);
            }
        }

        if(chose[x] == 1){
            left -= a[x];
            count--;
        }
        else if(chose[x] == 2){
            right -= a[x];
            count--;
        }
    }
}

void solve(){

    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    backtrack(0 , m , 0 , 0);

    cout << res << endl << cnt << endl;

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