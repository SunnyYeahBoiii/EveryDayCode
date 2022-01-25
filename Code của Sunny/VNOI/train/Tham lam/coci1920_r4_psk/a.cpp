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

struct info{
    int a , b , s , ord;
};

bool cmp(info a , info b){
    if(a.b == b.b)
        return a.a > b.a;
    return a.b < b.b;
}

bool cmp2(info a , info b){
    return a.ord < b.ord;
}

void solve(){
    
    int n;
    cin >> n;

    vector<info> ar(n);

    for(int i = 0 ; i < n ; i++){
        cin >> ar[i].a >> ar[i].b;
        ar[i].s = ar[i].b - ar[i].a;
        ar[i].ord = i;
    }

    sort(ar.begin() , ar.end() , cmp);

    int j = n-1 , i = 0;

    int res = 0;

    while(i < n && j >= 0 && i < j){
        int left = ar[j].b - ar[j].a;
        int need = ar[i].a;
        if(left > need){
            ar[j].a += need;
            ar[i].a = 0;
            res++;
            i++;
        }else if(left < need){
            ar[i].a -= left;
            ar[j].a = ar[j].b;
            j--;
        }else{
            ar[i].a = 0;
            ar[j].a = ar[j].b;
            i++;
            j--;
            res++;
        }
    }

    cout << res << endl;
    sort(ar.begin() , ar.end() , cmp2);
    for(int  i = 0 ; i < n ; i++)
        cout << ar[i].a << " ";
    cout << endl;
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