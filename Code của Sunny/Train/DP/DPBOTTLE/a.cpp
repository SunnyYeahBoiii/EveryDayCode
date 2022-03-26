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

int n;
int dp[10005] , cnt[10005];
vector<int> a;

void solve(){
    cin >> n;
    a.resize(n + 5);

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    dp[0] = 0;
    dp[1] = a[1];
    cnt[1] = 1;
    dp[2] = a[1] + a[2];
    if(a[1] == 0)
        cnt[2] = 1;
    else cnt[2] = 2;
    dp[3] = a[3];
    cnt[3] = 1;
    if(dp[3] < a[3] + a[1]){
        dp[3] = a[3] + a[1];
        cnt[3] = 2;
    }
    if(dp[3] < a[3] + a[2]){
        dp[3] = a[3] + a[2];
        cnt[3] = 2;
    }

    for(int i = 4 ; i <= n ; i++){
        dp[i] = dp[i-1];
        cnt[i] = cnt[i-1];

        if(dp[i] < dp[i-2] + a[i]){
            dp[i] = dp[i-2] + a[i];
            cnt[i] = cnt[i-2] + 1;
        }

        if(dp[i] < dp[i-3] + a[i]){
            dp[i] = dp[i-3] + a[i];
            cnt[i] = cnt[i-3];
        }else if(dp[i] == dp[i-3] + a[i])
            cnt[i] = min(cnt[i-3] + 1 , cnt[i]);

        if(i > 4){
            if(dp[i] < dp[i-4] + a[i]){
                dp[i] = dp[i-4] + a[i];
                cnt[i] = cnt[i-4];
            }else if(dp[i] == dp[i-4] + a[i])
                cnt[i] = min(cnt[i] , cnt[i-4] + 1);

            if(dp[i] < dp[i-4] + a[i] + a[i-1]){
                dp[i] = dp[i-4] + a[i] + a[i-1];
                cnt[i] = cnt[i-4] + 2;
            }else if(dp[i] == dp[i-4] + a[i] + a[i-1]) cnt[i] =min(cnt[i-4] + 2 , cnt[i]);

            if(dp[i] < dp[i-4] + a[i] + a[i-2]){
                dp[i] = dp[i-4] + a[i] + a[i-1];
                cnt[i] = cnt[i-4] + 2;
            }else if(dp[i] == dp[i-4] + a[i] + a[i-1])
                cnt[i] = min(cnt[i-4] + 2 , cnt[i]);    
        }

        if(dp[i] < dp[i-3] + a[i] + a[i-1]){
            dp[i] = dp[i-3] + a[i] + a[i-1];
            cnt[i] = cnt[i-3] + 2;
        }else if(dp[i] == dp[i-3] + a[i] + a[i-1])
            cnt[i] = min(cnt[i] ,cnt[i-3] + 2);

        if(i > 5){
            if(dp[i] < dp[i-5] + a[i] + a[i-2]){
                dp[i] = dp[i-5] + a[i] + a[i-2];
                cnt[i] = cnt[i-5] + 2;
            }else if(dp[i] == dp[i-5] + a[i] + a[i-2])
                cnt[i] = min(cnt[i] , cnt[i-5] + 2);
        }

    }

    // i i-1 i-2 i-3 i-4 i-5

    int res = -1 , resCnt;
    for(int i = 0 ; i <= n ; i++){
        if(res < dp[i]){
            res = dp[i];
            resCnt = cnt[i];
        }else if(res == dp[i])resCnt = min(resCnt , cnt[i]);
    } 

    cout << resCnt << " " << res << endl;
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