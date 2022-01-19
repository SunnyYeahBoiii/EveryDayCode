#include <bits/stdc++.h>

using namespace std;

#define pb(n) push_back(n)
#define int long long
#pragma GCC optimize("Ofast")

vector<long long> m1,m2,c1,c2;
int m,n;

void sortm1(int l , int r){
	int i = l , j = r , x = m1[(l+r)/2];
	while(!(i > j)){
		while(m1[i] < x) i++;
		while(m1[j] > x) j--;
		if(i <= j){
			swap(m1[i] , m1[j]);
			swap(c1[i] , c1[j]);
			i++;
			j--;
		}
	}
	if(i < r) sortm1(i , r);
	if(l < j) sortm1(l , j);
}

void sortm2(int l , int r){
	int i = l , j = r , x = m2[(l+r)/2];
	while ( !(i > j) ){
		while(m2[i] < x) i++;
		while(m2[j] > x) j--;
		if(i <= j){
			swap(m2[i] , m2[j]);
			swap(c2[i] , c2[j]);
			i++;
			j--;
		}
	}
	if(i < r) sortm2(i , r);
	if(l < j) sortm2(l , j);
}

void generate(int i , int n1 , vector<int> w , vector<int> v , int d){
    if(i > n1)
        return;
    vector<long long> resm , resc;
    resm.clear();
	resc.clear();
	resm.pb(w[i]);
	resc.pb(v[i]);
	int sz;
	for(int l = i+1 ; l <= n1 ; l++){
		sz = resm.size();
		for(int j = 0 ; j< sz ; j++){
			resm.pb(w[l]+resm[j]);
			resc.pb(v[l]+resc[j]);
		}
		resm.pb(w[l]);
		resc.pb(v[l]);
	}
	if(d == 1){
		m1 = resm;
		c1 = resc;
	}else{
		m2 = resm;
		c2 = resc;
	}
}

long long timnp(long long s){
    long long l = 0 , r = m2.size()-1 , mid , bestc = -1;
    while(l <= r){
        mid = (l+r)/2;
        if(m2[mid] <= s){
            bestc = max(bestc , mid);
            l = mid + 1;
        }else r = mid-1;
    }

    return bestc;
}

void DoTheRes(){
    //for(int i = 0; i < m1.size() ; i++) cout << m1[i] << " " << c1[i] << endl;
    //cout << endl;
	//for(int i = 0; i < m2.size() ; i++) cout << m2[i] << " " << c2[i] << endl;
	long long res = 0 , resFind , weight = 0;
	long long maxv2[m2.size()+5];
	maxv2[0] = c2[0];
    
    /*
    cout << m1.size() << " " << m2.size() << endl;

    cout << "1" << endl;
    for(int i = 0 ; i < m1.size() ; i++)
        cout << m1[i] << " " << c1[i] << endl;

    cout << "2" << endl;
    for(int i = 0 ; i < m2.size() ; i++)
        cout << m2[i] << " " << c2[i] << endl;

    cout << endl;
    */
	for(int i = 1 ; i < m2.size() ; i++) maxv2[i] = max(maxv2[i-1] , c2[i]);
	for(int i = 0; i < m1.size() ; i++) if(m1[i] <= m)
        if(c1[i] > res){
            res = c1[i];
            weight = m1[i];
        }
	for(int i = 0; i < m2.size() ; i++) if(m2[i] <= m)
        if(c2[i] > res){
            res = c2[i];
            weight = m2[i];
        }
	for(int i = 0 ; i < m1.size() ; i++){
        resFind = timnp(m - m1[i]);
        if(resFind == -1)
            continue;
		if(c1[i] + maxv2[resFind] > res){
            res = c1[i] + maxv2[resFind];
            weight = m1[i] + m2[resFind];
        }
	}
	cout << res  << endl;
    //cout << weight << endl;
}

void init(){
	cin>> n >> m;
	vector<int> w(n+5) , v(n+5);
	for(int i = 1 ; i <= n ; i++)
		cin >> w[i] >> v[i];
	generate(1 , n/2 , w , v , 1);
	generate(n/2+1 , n, w , v, 2);
	if(m1.size() > 0) sortm1(0,m1.size()-1);
	if(m2.size() > 0) sortm2(0 , m2.size()-1);
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	init();
	DoTheRes();
	return 0;
}
