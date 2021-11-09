// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.

Sort a[]

Cast d[i] - > d[i+c-1] to another array

Sort the array that just created 
then compare a[i] and d[i]

for i < n-c+1 [
	if abs(a[0] - b[0]) == abs(a[1] - b[1]) == ...... == abs(b[c] == b[c])
	then i is one of the result 
]

*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "music"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	int c;
	cin >> c;
	int b[c];
	for(int i = 0 ; i < c ; i++)
		cin >> b[i];
	sort(b , b+c);
	deque<int> cur , cur2;
	vector<int> res;
	/*
	cout << "c : \n";
	
	for(int i = 0 ; i < c ; i++)
		cout << b[i] << " ";
	cout << endl;
	*/
	for(int i = 0 ; i < n ; i++){
		cur2.push_back(a[i]);
		if(i >= c)
			cur2.pop_front();

		if(i >= c-1){
			cur.clear();
			cur = cur2;	
			sort(cur.begin() , cur.end());
			/*		
			for(int i = 0 ; i < cur.size() ; i++)
				cout << cur[i] << " ";
			cout << endl;
			*/
			int ex = cur[0] - b[0];
			bool flag = true;
			for(int i = 1 ; i < c; i++){
				if(cur[i] - b[i] != ex){
					flag = false;
					break;
				}
			}

			if(flag)
				res.push_back(i - c + 2);
		}
	}	

	cout << res.size() << endl;
	for(int i = 0 ; i < res.size() ; i++)
		cout << res[i] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
        solve();
        return 0;
}        
