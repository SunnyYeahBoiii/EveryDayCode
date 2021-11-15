// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int unsigned long long
#define endl "\n"
#define INF 1 << 30

int n , x;
int a[40];
vector<pair<int , int>>s1 , s2;
vector<pair<int , int>> sm;
int chose[40];

void gen(int i ,int l , int r , int sum , int cnt){
	for(int j = 0 ; j <= 1 ; j++){
		chose[i] = j;
		if(i < r){
			if(chose[i] == 0)
				gen(i+1 , l , r , sum , cnt);
			else gen(i+1 , l , r , sum+a[i] , cnt+1);
		}else{ 
			if(chose[i] == 0)
				sm.push_back({sum , cnt});
			else sm.push_back({sum + a[i] , cnt+1});
		}
	}
}

void solve(){
	cin >> n >> x;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	sm.clear();
	gen(1 , 1 , n/2 , 0 , 0);	
	/*
	for(int i = 0 ; i < sm.size() ; i++){
		if(sm[i].first == 0 || sm[i].second == 0)
			continue;
		s1[sm[i].first / (double)sm[i].second]++;
	}
	*/
	s1 = sm;
	sm.clear();
	gen(n/2+1 , n/2+1 , n , 0 , 0);
	s2 = sm;
	
	/*
	 * for(int i = 0 ; i < sm.size() ; i++){
		if(sm[i].first == 0 || sm[i].second == 0)
			continue;
		s2[(sm[i].first/(double)sm[i].second)/(double)2]++;
	}
	
	
	sort(s1.begin() , s1.end());
	sort(s2.begin() , s2.end());
	for(int i = 0 ; i < s1.size() ; i++)
		cout << s1[i] << endl;
	cout << endl;
	for(int i = 0 ; i < s2.size() ; i++)
		cout << s2[i] << endl;
	cout << endl;

	(a + b) / 2 = a/2 + b/2

	*/
	int res = 0;
	
	for(int i = 0 ; i < s1.size() ; i++){
		//if((s1[i].first / (double)s1[i].second) == x)
		//	res++;
		for(int j = 0 ; j < s2.size() ; j++){
			//if((s2[j].second / (double)s2[j].second) == x)
			//res++;
			if(((s1[i].first+s2[j].first) / (double)(s1[i].second + s2[j].second)) == x)	
				res++;
			
		}
	}

	cout <<res << endl;

}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
