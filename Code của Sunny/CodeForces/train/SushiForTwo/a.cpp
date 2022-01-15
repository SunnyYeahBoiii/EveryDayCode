// Link : https://codeforces.com/problemset/problem/1138/A
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

vector<int> a;

bool test(int x){

    for(int i = 0 ; i + x - 1 < a.size() ; i++){
        bool flag1 = false , flag2 = false;
        int cnt[] = {0 ,0 , 0};
        for(int j = i ; j <= (i + x - 1) / 2 ; j++){
            cnt[a[j]]++;
        }
        if((cnt[1] > 0 && cnt[2] == 0) || (cnt[1] == 0 && cnt[2] > 0))
            flag1 = true;

        int cnt2[] = {0 , 0 , 0};
        for(int j = (i + x - 1) / 2 + 1 ; j <= (i + x - 1) ; j++){
            cnt2[a[j]]++;
        }
        
        if((cnt2[1] > 0 && cnt2[2] == 0) || (cnt2[1] == 0 && cnt2[2] > 0))
            flag2 = true;

        cout << i << " " << flag1 << " " << flag2 << " " << cnt[1] << " " << cnt[2] << " " << x << endl;
        if(flag1 && flag2 && cnt[1] + cnt2[1] == cnt[2] + cnt2[2])
            return true;
    }

    return false;
}

void solve(){

    int n;
    cin >> n;
    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int l = 0 , r = n , mid , best = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(mid % 2 == 1)
            mid++;
        if(test(mid)){
            l = mid + 2;
            best = max(mid , best);
        }else
            r = mid - 2;
    }

    cout << best << endl;

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