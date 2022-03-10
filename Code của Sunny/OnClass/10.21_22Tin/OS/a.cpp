// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "os"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF LLONG_MAX

struct data{
    int a , b;
};

bool cmp(data& a , data& b){
    if(a.b == b.b)
        return a.a < b.a;
    else return a.b < b.b;
}

void solve(){

    int m , n;
    cin >> m >> n;

    vector<data> d(n);

    for(int i = 0 ; i < n ; i++)
        cin >> d[i].a >> d[i].b;

    sort(d.begin() , d.end() , cmp);

    vector<int> f;
    int res = 1;
    f.push_back(0);

    for(int i = 1 ; i < n ; i++){
        if(d[f.back()].b < d[i].a){
            f.push_back(i);
            res++;
            continue;
        }

        int l = 0 , r = f.size()-1 , mid , best = 0;

        while(l <= r){
            int mid = (l + r) / 2;
            /*if(mid == f.size() -1 && d[f[mid-1]].b < d[i].a)
                best = mid;
            else if(mid == 0 && d[f[mid+1]].a > d[i].b)
                best = mid;
            else */ 
            if(d[f[mid]].b <= d[i].a && d[f[mid+1]].a > d[i].b)
                best = mid;
            else if(d[f[mid]].b < d[i].a)
                l = mid + 1;
            else r = mid - 1;
        }

        f[best] = res;
    }

    cout << f.size() << endl;
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