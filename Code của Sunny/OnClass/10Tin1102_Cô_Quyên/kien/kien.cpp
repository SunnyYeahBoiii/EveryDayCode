// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "kien"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

struct data{
    int w , x , d;
};

bool cmp(data a , data b){
    return a.x < b.x;
}

deque<data> a;

/*
void solve(){
    int n , l;
    cin >> n >> l;

    a.resize(n);

    int aa , b , c;

    for(int i = 0 ; i < n ; i++){
        cin >> aa >> b >> c;
        a[i].w = aa;
        a[i].x = b;
        a[i].d = c;
    }

    sort(a.begin() , a.end() , cmp);

    int cnt = 0;

    bool flag = false;

    while(true){

        while(a.front().d == -1)
            a.pop_front();

        while(a.back().d == 1)
            a.pop_back()

        for(int i = 0 ; i < a.size() ; i++)
    }
}
*/

void solve(){

    int n , l;
    cin >> n >> l;

    a.resize(n);

    int aa , b , c;

    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> aa >> b >> c;
        a[i].w = aa;
        a[i].x = b;
        a[i].d = c;
        sum += aa;
    }

    int cnt = 0 , t =0;

    while(a.size() > 1 && t <= sum){

        sort(a.begin() , a.end() , cmp);   

        while(a.front().x == 0){
            t += a.front().w;
            a.pop_front();
        }

        while(a.back().d == l){
            t += a.back().w;
            a.pop_back();
        }
        int i = 0;

        while(i < a.size()-1 && a.size() > 1){
            if(a[i].x + a[i].d > a[i+1].x + a[i+1].d){
                a[i].d = -a[i].d;
                a[i+1].d = -a[i+1].d;
                i += 2;
                if(t <= sum)cnt++;
            }else if(a[i].x + a[i].d == a[i+1].x + a[i+1].d){
                a[i].x += a[i].d;
                a[i+1].x += a[i].d;
                a[i].d =  -a[i].d;
                a[i+1].d = -a[i+1].d;
                i += 2;
                if(t <= sum)cnt++;
            }
            else{
                a[i].x += a[i].d;
                i++;
            }

        }

    }

    cout << cnt << endl;
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