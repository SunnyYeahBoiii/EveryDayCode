// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "out"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){/*freopen(NAME".inp" , "r" , stdin);*/freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int res = 0;
string board[10];
int chose[10][10];
int atk[10][10];

void attemp(int x){
    /*
    for(int i = 0 ; i < 2 ; i++){

        if(i == 1 && atk[x][y] > 0)
            continue;
        chose[x][y] = i;
        
        if(chose[x][y] == 1){
            for(int i = 0 ; i < 8 ; i++){
                atk[x][i] += 1;
                atk[i][y] += 1;
            }
        }

        if(x < 7 && y < 7)
            attemp(x+1 , y+1);
        if(y == 7)
            attemp(x+1 , y)
        if(x == 7)
            attemp()

        if(chose[x][y] == 1){
            for(int i = 0 ; i < 8 ; i++){
                atk[x][i] -= 1;
                atk[i][y] -= 1;
            }
        }

    }
    */

   for(int i = 0 ; i < 8 ; i++){
        if(atk[x][i] > 0 || board[x][i] == '*')
            continue;
        chose[x][i] = 1;

        int l = x - min(x , i) , k = i - min(x , i);
        while(l < 8 && k < 8){
            atk[l][k] += 1;
            l++; k++;
        }

        l = x - min(x , i) , k = i + min(x , i);
        while(l < 8 && k >= 0){
            atk[l][k] += 1;
            l++; k--;
        }

        for(int j = 0 ; j < 8 ; j++)
            atk[j][i] += 1;

        if(x < 7)
            attemp(x+1);
        else{
            res++;    
        }
        chose[x][i] = 0;    
        
        l = x - min(x , i) , k = i - min(x , i);
        while(l < 8 && k < 8){
            atk[l][k] -= 1;
            l++; k++;
        }

        l = x - min(x , i) , k = i + min(x , i);
        while(l < 8 && k >= 0){
            atk[l][k] -= 1;
            l++; k--;
        }

        for(int j = 0 ; j < 8 ; j++)
            atk[j][i] -= 1;
    }

}

void solve(){

    for(int i = 0 ; i < 8 ; i++){
        cin >> board[i];
    }

    memset(chose , 0 , sizeof(chose));
    memset(atk , 0 , sizeof(atk));
    attemp(0);

    cout << res << endl;

}

int32_t main(){
	//FileInput();
	fast();    
	solve();
	return 0;
}