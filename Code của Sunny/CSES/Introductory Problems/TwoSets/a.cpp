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

const int LIM = 1000001;

vector<int> set1 , set2;
bool flag = true;

void take(int idx){
    if(idx > 3){
        set1.push_back(idx);
        set1.push_back(idx-3);
        set2.push_back(idx-2);
        set2.push_back(idx-1);
        take(idx-4);
    }else if(idx == 3){
        set2.push_back(idx);
        set1.push_back(idx-1);
        set1.push_back(idx-2);
    }else if(idx == 1 || idx == 2){
        flag = false;
        return;
    }else return;
};

void solve(){

    int n;
    cin >> n;

    take(n);

    if(flag == false)
        cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        sort(set1.begin() , set1.end());
        sort(set2.begin() , set2.end());

        cout << set1.size() << endl;
        for(int i = 0 ; i < set1.size() ; i++)
            cout << set1[i] << " ";
        cout << endl;

        cout << set2.size() << endl;
        for(int i = 0 ; i < set2.size() ; i++)
            cout << set2[i] << " ";
        cout << endl;
    }
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