#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,k;
    cin >> m >> n >> k;
    long long a[m+5];
    for(int i = 1 ; i <= m ; i++) cin >> a[i];
    sort(a +1, a+m + 1);
    long long s[m+5];
    s[1] = a[1];
    for(int i = 2 ; i <= m ; i++) s[i] = s[i-1] + a[i];
    long long res = -2;
    s[0] = 0;
    s[m+1] = s[m];
    for(int i = m-n+1 ; i > 0 ; i--){
        if( a[i+n-1] - a[i] <= k){
            if(s[i+n-1] - s[i-1] > res)res = s[i+n-1] - s[i-1];
        }
    }
    cout << res << endl;
    return 0;
}
