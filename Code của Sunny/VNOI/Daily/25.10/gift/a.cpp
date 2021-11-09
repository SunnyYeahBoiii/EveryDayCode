#include "bits/stdc++.h"

using namespace std;

struct info{
	int a , b;
};

bool cmp(info a , info b){
	return a.b > b.b;
}

bool cmpa(info a , info b){
	return a.a > b.a;
}

void solve(){
	int n;
	cin >> n;
	info bags[n];
	for(int i = 0 ; i < n ; i++)
		cin >> bags[i].a >> bags[i].b;

	int cur = 0 , left = 1;
	sort(bags , bags + n , cmp);
	// sort theo b giam dan

	//for(int i =0 ; i < n ; i++)
	//	cout << bags[i].a << " " << bags[i].b << endl; 

	int i = 0 , st = 0;
	for(; i < n && bags[i].b > 0 ; i++){
		if(bags[i].a > 0 || bags[i].b > 1){
			left--;
			left += bags[i].b;
			cur += bags[i].a;
			st = i;
		}
	}
	if(st == n-1)
		cout << cur << endl;
	else{;
		sort(bags+st+1 ,bags+n , cmpa);
		int j = st+1;
		while(left > 0 && j < n){
			cur += bags[j].a;
			left--;
			j++;
		}
		cout << cur << endl;
	}
	//cout << st << endl;
	//for(int i = 0 ; i < n ; i++)
	//	cout << bags[i].a << " " << bags[i].b << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
