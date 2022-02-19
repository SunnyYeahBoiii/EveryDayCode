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

struct data{
    int x , m;
};

vector<data> a;

bool cmp(data& a , data& b){
    return a.x < b.x;
}

void solve(){

    int n , k;
    cin >> n >> k;
    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i].x >> a[i].m;
    a.push_back({0 , 0});

    sort(a.begin() , a.end() , cmp);

    int time = 0;

    int x = 0;
    while(a[x].x < 0)
        x++;

    int i = 0;

    while(i < x){
        if(a[i].m >= k){
            time += abs(a[i].x) * 2;
            int left = k - (a[i].m % k);
            a[i].m = 0;
            i++;
            while(left > a[i].m){
                i++;
                left -= a[i].m;
                a[i].m = 0;
            }

            a[i].m -= left;
        }else{
            time += abs(a[i].x) * 2;
            int left = k;
            while(left > a[i].m){
                i++;
                left -= a[i].m;
                a[i].m = 0;
            }

            a[i].m -= left;
        }
    }
    
    cout << time << endl;
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
