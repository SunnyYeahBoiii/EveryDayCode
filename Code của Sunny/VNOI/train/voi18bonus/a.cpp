// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "remizdabest"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

int n , k , r , p;
int prefix[505][505] , back[505][505];
int board[505][505];
vector<vector<int>> plan;

struct query{

    int x[5] , y[5];

};

query minuss(int x1 , int y1 , int x2 , int y2){

    query ret;

    if(x1 > x2){
        swap(x1 , x2);
        swap(y1 , y2);
    }else if(x1 == x2){
        if(y1 > y2)
            swap(y1 , y2);
    }

    if(y1 > y2){
        ret.x[1] = x2;
        ret.y[1] = y1;
    }else{
        ret.x[1] = x2;                    // top left
        ret.y[1] = y2;
    }
    ret.x[2] = min(x2+r-1 , x1+r-1);    // bot left
    ret.y[2] = y2;
    ret.x[3] = x2;                    // top right
    ret.y[3] = min(y1+r-1 , y2+r-1);
    ret.x[4] = min(x2 + r-1 , x1+r-1);  // bot right
    ret.y[4] = min(y1+r-1 , y2+r-1);

    return ret;
}

int test_subtask1(int ith){

    int sum = 0;

    //cout << ith << endl;

    for(int i = 0 ; i < 2*p ; i += 2){
        int x = plan[ith][i] , y = plan[ith][i+1];
        for(int col = x ; col <= x + r - 1 ; col++){
            for(int row = y ; row <= y + r - 1 ; row++){
                sum += board[col][row];
                board[col][row] = 0;
            }
        }    

    }

    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++)
            board[i][j] = back[i][j];

    return sum;
}

bool valid(query t){

    if(!(t.y[1] <= t.y[3] && t.y[2] <= t.y[4]))
        return false;
    
    if(!(t.x[1] <= t.x[2] && t.x[3] <= t.x[4]))
        return false;

    return true;
}

query cross(query a , query b){

    if(a.x[1] > b.x[1]){
        swap(a , b);
    }else if(a.x[1] == b.x[1])
        if(a.y[1] > b.y[1])
            swap(a , b);

    query ret;
    
    if(a.y[1] > b.y[1]){
        ret.x[1] = b.x[1];
        ret.y[1] = a.y[1];
    }else{
        ret.x[1] = b.x[1];
        ret.y[1] = b.y[1];
    }
    ret.x[2] = min(a.x[2] , b.x[2]);
    ret.y[2] = b.y[2];
    ret.x[3] = a.x[3];
    ret.y[3] = min(a.y[3] , b.y[3]);
    ret.x[4] = min(a.x[4] , b.x[4]);
    ret.y[4] = min(a.y[4] , b.y[4]);

    return ret;
}

int test_sub2(int x){

    int x1 = plan[x][0] , y1 = plan[x][1] , x2 = plan[x][2] , y2 = plan[x][3];

    int sum = prefix[x1+r-1][y1+r-1] - prefix[x1+r-1][y1-1] - prefix[x1-1][y1+r-1] + prefix[x1-1][y1-1]; 
    sum += prefix[x2+r-1][y2+r-1] - prefix[x2+r-1][y2-1] - prefix[x2-1][y2+r-1] + prefix[x2-1][y2-1];   

    query t = minuss(x1 , y1 , x2 , y2);

    int m = 0;
    if(valid(t))
        m = prefix[t.x[1]-1][t.y[1]-1] - prefix[t.x[2]][t.y[2]-1] - prefix[t.x[3]-1][t.y[3]] + prefix[t.x[4]][t.y[4]];
    
    return sum;
}

void print(query x){
    cout << "x" << endl;
    for(int i = 1 ; i <= 4 ; i++)
        cout << x.x[i] << " " << x.y[i] <<endl;

}

query gt(int x , int y){

    query ret;
    ret.x[1] = x;
    ret.y[1] = y;
    ret.x[2] = x+r-1;
    ret.y[2] = y;
    ret.x[3] = x;
    ret.y[3] = y+r-1;
    ret.x[4] = x+r-1;
    ret.y[4] = y+r-1;

    return ret;

}

int test_sub3(int x){

    int x1 = plan[x][0] , y1 = plan[x][1] , x2 = plan[x][2] , y2 = plan[x][3] , x3 = plan[x][4] , y3 = plan[x][5];
    int sum = prefix[x1+r-1][y1+r-1] - prefix[x1+r-1][y1-1] - prefix[x1-1][y1+r-1] + prefix[x1-1][y1-1]; 
    sum += prefix[x2+r-1][y2+r-1] - prefix[x2+r-1][y2-1] - prefix[x2-1][y2+r-1] + prefix[x2-1][y2-1];
 
    sum += prefix[x3+r-1][y3+r-1] - prefix[x3+r-1][y3-1] - prefix[x3-1][y3+r-1] + prefix[x3-1][y3-1];  

    query t = minuss(x1 , y1 , x2 , y2);    
    query t2 = minuss(x2 , y2 , x3 , y3);
    query t3 = minuss(x1 , y1 , x3 , y3);

    int m = 0;
    cout << "sum = " << sum << endl;
    if(valid(t))
        sum -= prefix[t.x[1]-1][t.y[1]-1] - prefix[t.x[2]][t.y[2]-1] - prefix[t.x[3]-1][t.y[3]] + prefix[t.x[4]][t.y[4]];
    cout << "sum = " << sum << endl;
    if(valid(t2))
        sum -= prefix[t2.x[1]-1][t2.y[1]-1] - prefix[t2.x[2]][t2.y[2]-1] - prefix[t2.x[3]-1][t2.y[3]] + prefix[t2.x[4]][t2.y[4]];
    cout << "sum = " << sum << endl;
    if(valid(t3))
        sum -= prefix[t3.x[1]-1][t3.y[1]-1] - prefix[t3.x[2]][t3.y[2]-1] - prefix[t3.x[3]-1][t3.y[3]] + prefix[t3.x[4]][t3.y[4]];
    cout << "sum = " << sum << endl;
    query t4 = cross(t , t3);
    print(t);
    print(t2);
    print(t3);
    print(t4);

    if(valid(t4))
        sum += prefix[t4.x[1]-1][t4.y[1]-1] - prefix[t4.x[2]][t4.y[2]-1] - prefix[t4.x[3]-1][t4.y[3]] + prefix[t4.x[4]][t4.y[4]];
    return sum;
}

void solve(){

    cin >> n >> k >> r >> p;
    plan.resize(k);

    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++){
            cin >> board[i][j];
            prefix[i][j] = board[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            back[i][j] = board[i][j]; 
        }
    plan.resize(k);

    for(int i = 0 ; i < k ; i++){
        plan[i].resize(2*p+1);
        for(int j = 0 ; j < 2*p ; j++)
            cin >> plan[i][j];
    }

    int res = 0;

    /*if(k <= 50){
        for(int i = 0 ; i < k ; i++){
            int t = test_subtask1(i);   
            res = max(res , t);
            //cout << t << endl;
        }
        cout << res << endl;
    }else{*/
        if(p == 2){
            for(int i = 0 ; i < k ; i++){
                int t = test_sub2(i);   
                res = max(res , t);
            }
            cout << res << endl;
        }else if(p == 3){
            for(int i = 0 ; i < k ; i++){
                int t = test_sub3(i);
                res = max(res , t);
            }
            cout << res << endl;
        }

    //}

}

int32_t main(){
	FileInput();
	fast();    
	/*
	int t;
    cin >> t;
    while(t--)
	*/
	solve();
	return 0;	
}