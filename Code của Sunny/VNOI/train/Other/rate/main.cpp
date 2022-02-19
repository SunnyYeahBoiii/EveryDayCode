#include <bits/stdc++.h>

using namespace std;

//#define double long double

vector<double> a;
int k;
const double INF = 1 << 30;

bool ok(double x){
    vector<double> b(a.size()) , minn(a.size());

    int n = a.size();
    
    for(int i = 0 ; i < n ; i++){
        b[i] = a[i] - x;
        b[i] += b[i-1];
        //cout << b[i] << " ";
    }
    //cout << endl;

    minn[0] = b[0];

    for(int i = 1 ; i < n ; i++){
        minn[i] = min(minn[i-1] , b[i]);
    }

    //cout << x << endl;

    for(int i = k-1 ; i < n ; i++){
        //cout << b[i] << " " << min(0.0 ,minn[i - k]) << endl;;
        if(b[i] - min(0.0 , minn[i - k]) >= 0.0)
            return true;
    }
    //cout << endl;
    return false;
    
}

void solve(){
    int n;
    cin >> n >> k;

    a.resize(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    cout << fixed << setprecision(3);

    double l = -1 , r = 1000000000.1 , mid , best = 0;
    while(r-l >= 0.0001){
        mid = (l + r) / (double)2;
        if(ok(mid)){
            l = mid;
            if(mid - best >= 0.000001)
                best = mid;
        }
        else r = mid;
    }

    cout << best << endl;
}

int main()
{
    //freopen("rate.inp" , "r" , stdin);
    //freopen("rate.out" , "w" , stdout);
    solve();
    return 0;
}
