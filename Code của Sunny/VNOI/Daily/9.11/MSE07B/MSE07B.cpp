// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "MSE07B"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30
#define pii pair<int , int>

struct info{
	int a, b;
};

struct cmp{
bool operator() (info a , info b){
	return a.b < b.b;
}
};

void solve(){
	set < info , cmp > q;
	int p , x, y;
	
	while(cin >> p){
		if(p == 1){
			cin >> x >> y;
			info d;
			d.a = x , d.b = y;
			q.insert(d);
		}if(p == 2){
			if(q.size() > 0){
			set<info , cmp> :: iterator cur = q.end();
			cur--;
			cout << cur -> a << endl;
			q.erase(cur);
			}else cout << "0" << endl;
		}else if(p == 3){
			if(q.size() > 0){
			set<info,cmp>::iterator cur = q.begin();
			cout << cur -> a << endl;
			q.erase(cur);
			}else cout << "0";
		}else if(p == 0)
			break;
	}	
	
}

int32_t main(){
       	ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
