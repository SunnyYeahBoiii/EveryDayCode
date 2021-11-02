// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "redtowel"
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int w , h;
int a[105][105];
bool safe(int x , int y ){
	if(0 <= x && x <= w && 0 <= y && y <= h)
		if(a[x][y] == 0)
			return true;
	return false;
}

int to_num(char a){
        return a-'0';
}

string cong(string a, string b){
        reverse(a.begin() , a.end());
        reverse(b.begin() , b.end());

        while(a.size() < b.size())
                a += '0';

        while(b.size() < a.size())
                b+= '0';
        string rev = "";
        int add , nho = 0;
        for(int i = 0 ; i < a.size() ; i++){
                add = to_num(a[i]) + to_num(b[i]) + nho;
                if(add > 9){
                        nho = 1;
                        add %= 10;
                }else nho = 0;
                rev += add + '0';
        }

        if(nho > 0)
                rev += nho + '0';

        reverse(rev.begin() , rev.end());
        return rev;

}


void semt(){
	for(int i = 0 ; i < 105 ; i++){
		for(int j = 0 ; j < 105 ; j++){
			a[i][j] = 0;
		}
	}
}

void solve(int n){
	semt();
	int x, y;
	for(int i = 0 ; i < n ; i++){
		cin >> x >> y;
		a[x][y] = 1;
	}
	int best[w+1][h+1];
	
	for(int i = 0 ; i <= w ; i++){
		for(int j = 0 ; j <= h ; j++){
			best[i][j] = INF;
		}
	}

	queue<pair<int , int>> q;
	string cnt[w+1][h+1];
	memset(cnt , 0 , sizeof(cnt));
	cnt[0][0] = "1";
	best[0][0] = 0;
	q.push({0 , 0});
	while(!q.empty()){
		int x = q.front().first, y = q.front().second;
		q.pop();
		//cout << x << " " << y << " cur" << endl; 
		if(safe(x+1 , y)){
			//cout << "safe " << x+1 << " " << y << endl;
			if(best[x+1][y] > best[x][y] + 1){
				best[x+1][y] = best[x][y] + 1;
				cnt[x+1][y] = cnt[x][y];
				q.push({x+1 , y});
			}else if(best[x+1][y] == best[x][y] + 1)
				cnt[x+1][y] = cong(cnt[x+1][y] , cnt[x][y]);
		}

		if(safe(x, y+1)){
			//cout << "safe " << x << " " << y+1 << endl;
			if(best[x][y+1] > best[x][y] + 1){
				best[x][y+1] = best[x][y] + 1;
				cnt[x][y+1] = cnt[x][y];
				q.push({x , y+1});
			}else if(best[x][y] + 1 == best[x][y+1]){
				cnt[x][y+1] = cong(cnt[x][y+1] ,cnt[x][y]);
			}
		}
	}
	cout << cnt[w][h] << endl;
}

int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        FileInput();
	int n;
	while(cin >> w >> h >> n)
        	solve(n);
        return 0;
}        
