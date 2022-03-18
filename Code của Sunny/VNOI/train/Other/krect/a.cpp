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

char a[105][105];
map<char , int> pref[105][105];
int n , m , k;

int kadane(int t , int b){
    map<char , int> cnt;
    int l = 1 , c = 0 , res = 0;
    for(int r = 1 ; r <= m ; r++){
        c = 0;
        for(char i = 'A' ; i <= 'Z' ; i++){
            cnt[i] += pref[b][r][i] - pref[t-1][r][i];
            if(cnt[i] > 0)
                c++;
        }

        while(c > k){
            c = 0;
            for(char i = 'A' ; i <= 'Z' ; i++){
                cnt[i] -= pref[b][l][i] - pref[t-1][l][i];
                if(cnt[i] >= 1)
                    c++;
            }
            l++;
        }

        int ll = l;

        while(c == k){
            c = 0;
            for(char i = 'A' ; i <= 'Z' ; i++){
                cnt[i] -= pref[b][l][i] - pref[t-1][l][i];
                if(cnt[i] >= 1)
                    c++;
            }
            l++;
            res++;
        }

        c = 0;
        while(l > ll){
            l--;
            for(char i = 'A' ; i <= 'Z' ; i++){
                cnt[i] += pref[b][l][i] - pref[t-1][l][i];
            }
        }
        for(int i = 'A' ; i <= 'Z' ; i++)
            if(cnt[i] > 0)
                c++;
        l = ll;
    }

    return res;
}

void solve(){
    cin >> n >> m >> k;
    n = 100 , m = 100 , k = 1;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++){
            //cin >> a[i][j];
            a[i][j] = 'A';
            pref[i][j] = pref[i-1][j];
            pref[i][j][a[i][j]]++;
        }
    int res = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= n ; j++){
            int x = kadane(i , j);
            res += x;
           // cout << i << " " << j << " " << x << endl;
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
