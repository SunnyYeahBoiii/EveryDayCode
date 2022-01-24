// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "bai5"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

struct data{
    int num1 , num2;
};

struct ccc{
    int a , b , c;  
};

bool cmp(ccc a , ccc b){
    return a.a < b.a;
}

void solve(){

    int n;
    cin >> n;

    vector<int> arr(n);
    map<int , int> cnt;

    int minnum = INF , maxnum = -INF;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        cnt[arr[i]]++;
        minnum = min(minnum , arr[i]);
        maxnum = max(maxnum , arr[i]);
    }

    map<int , vector<data>> a , b;

    map<int , bool> markval;

    for(int i = minnum ; i <= maxnum ; i++){
        for(int j = i+1 ; j <= maxnum ; j++){
            if(cnt[i] > 0 && cnt[j] > 0 && i != j)
                a[i + j].push_back({i , j});
        }
    }

    for(int i = minnum ; i <= maxnum ; i++){
        for(int j = i+1 ; j <= maxnum ; j++){
            if(cnt[i] > 0 && cnt[j] > 0 && i != j){
                b[3*i - j].push_back({i , j});
            }
        }
    }

    int res = 0;

    for(auto &aa : a){
        if(aa.second.size() == 0)
            continue;
        vector<data> bb = b[aa.first];

        for(int i = 0 ; i < aa.second.size() ; i++){
            for(int j = 0 ; j < bb.size() ; j++){
                if(markval[bb[j].num1])
                    continue;
                
                if(aa.second[i].num1 != bb[j].num1 && aa.second[i].num1 != bb[j].num2
                    && aa.second[i].num2 != bb[j].num1 && aa.second[i].num2 != bb[j].num2)
                        res += cnt[bb[j].num1];
                markval[bb[j].num1] = true;
            }
        }
    }

    cout << res << endl;

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