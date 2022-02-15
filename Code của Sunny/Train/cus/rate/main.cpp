#include <bits/stdc++.h>

using namespace std;

vector<double> a;
int k;
const double INF = 1 << 30;

bool ok(int x){
    vector<double> b(a.size());

    int n = a.size();

    for(int i = 0 ; i < n ; i++)
        b[i] = a[i] - x;

    int l = 0 , sum = 0;

    for(int r = 0 ; r < n ; r++){
        sum += a[r];

        while(sum > 0 && r - l + 1 >= k){
            sum -= a[l];
            l++;
        }

        if(sum > 0 && r - l + 1 >= k)
            return true;
    }
    return false;
}

void solve(){
    int n;
    cin >> n >> k;

    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    double l = 0 , r = 1000005 , mid , best = 0;
    while(r-l <= 0.000001){
        mid = (l + r) / 2;
        if(test(mid)){
            l = mid + 1;
            best = max(best , mid);
        }
        else r = mid - 1;
    }

    cout << best << endl;
}

int main()
{
    solve();
    return 0;
}
