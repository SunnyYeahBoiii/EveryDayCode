// Link : https://oj.vnoi.info/problem/c11cave
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

    int n, h;
    cin>> n >> h;

    vector<int> top , bot;

    int a;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        if(i % 2 == 0)
            bot.push_back(a);
        else top.push_back(h - a);
    }

    sort(top.begin() , top.end());
    sort(bot.begin() , bot.end());

    int res = INF;
    int count = 1;

    for(int i = 1 ; i <= h ; i++){
        int t = lower_bound(top.begin() , top.end() , i) - top.begin();
        int t2 = lower_bound(bot.begin() , bot.end() , i) - bot.begin();
        t2 = bot.size() - t2;
        if(t == -1)
            t = 0;
        if(t2 == -1)
            t2 = 0;
        if(t + t2 < res){
            res = t + t2;
            count = 1;
        }else if(t + t2 == res)
            count++;
        //cout << i << " " << t << " " <<  t2 << endl;
    }
    /*
    for(int i = 0 ; i < top.size() ; i++)
        cout << top[i] << " ";
    cout << endl;
    for(int i = 0 ; i < bot.size() ; i++)
        cout << bot[i] << " ";
    cout << endl;
    */
    cout << res << " " << count << endl;

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