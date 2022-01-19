#include <bits/stdc++.h>

using namespace std;

vector<long long> d1,d2;
map<long long , int> dc1 , dc2;
long long x;
long long xu[40];
int sl = 0;
long long n;
const int long long limit = 2000000000;

void init(){
    xu[1] = 2;
    xu[2] = 3;
    xu[3] = 5;
    for(int i = 4 ; i <= 34 ; i++){
        xu[i] = xu[i-1] + xu[i-2] + xu[i-3];
    }
}
// 23452134
        long long timnp(long long a){
            int l = 0, r = d2.size()-1 , m;
            while(l <= r){
                m = (l+r)/2;
                if(d2[m] > a)
                    r = m - 1;
                else if(d2[m] < a)
                    l = m + 1;
                else if(d2[m] == a) return d2[m];
            }
            return -1;
        }

        void dq1(int i , unsigned long long s , int d){
            for(int j = 0 ; j < 2 ; j++){
                s += j*xu[i];
                d += j;
                if(s > 0 && s < limit){
                    if(dc1[s] == 0){
                        dc1[s] = d;
                        d1.push_back(s);
                    }else{
                        dc1[s] = max(dc1[s] , d);
                    }
                }
                if(i < 17) dq1(i+1 , s , d);
                s -= j*xu[i];
                d -= j;
            }
        }

        void dq2(int i , unsigned long long s , int d){
            for(int j = 0 ; j < 2 ; j++){
                s += j*xu[i+17];
                d += j;
                if(s > 0 && s < limit){
                    if(dc2[s] == 0){
                        dc2[s] = d;
                        d2.push_back(s);
                    }else{
                        dc2[s] = max(dc2[s] , d);
                    }
                }
                if(i < 17) dq2(i+1 , s , d);
                s -= j*xu[i+17];
                d -= j;
            }
        }

        int main()
        {
            //ios_base::sync_with_stdio(false);
            //cin.tie(0);cout.tie(0);
            dc1.clear();
            dc2.clear();
            vector<long long> query;
            long long a , n;
            cin >> n;
            for(int i = 0 ; i < n ; i++){
                cin >> a;
                query.push_back(a);
            }
            dc2[-1] = 0;
            d1.push_back(0);
            init();
            long long res = 0 , d;
            dq1(1 , 0 , 0);
            sort(d1.begin() , d1.end());
            dq2(1 , 0 , 0);
            sort(d2.begin() , d2.end());
            for(int i = 0 ; i < query.size() ; i++){
                if(query[i] >= 2){
                res = 0;
                d = 0;
                for(int j = 0 ; j < d1.size() ; j++){
                    if(d1[j] > query[i]) break;
                    if(d1[j] == query[i]) res = max(res , (long long)dc1[d1[j]]);
                    else{
                    d = timnp(query[i]-d1[j]);
                    if(d > 0){res = max (res , (long long )(dc1[d1[j]] + dc2[d]));}
                    }
                }
                if(res > 0) cout <<"Case #" << i+1 <<": "<< res <<endl;
                else cout <<"Case #" << i+1 << ": -1" <<endl;
                }else cout <<"Case #" << i+1 << ": -1" <<endl;
            }
            return 0;
        }
