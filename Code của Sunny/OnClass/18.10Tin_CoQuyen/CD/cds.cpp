// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm not lazy anymore >:D

Simple Backtrack:

an Array for elements with only 0s and 1s

for chosing and not chosing for each

and then

{
for(int i = 0 ; i < n ; i++) 
    Sum += a[i] * Chose[i]

if(Sum <= n)
    res = max(res , Sum)
}

anymore question please contact: Minh Phương Vũ
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "cds"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

vector<int> CDs;
vector<int> chose;
vector<int> result;
int res = -1 , Count = 0, totalTime , numberOfCDS;

pair<int , int> getSum(){
    int Sum = 0 , count = 0;

    for(int i = 0 ; i < numberOfCDS ; i++){
        Sum += CDs[i] * chose[i];
        if(chose[i] == 1)
            count += 1;
    }

    return {Sum , count};
}

void backtrack(int x){

    for(int i = 0 ; i < 2 ; i++){
        chose[x] = i;

        if(x < numberOfCDS-1)
            backtrack(x+1);
        else{
            pair<int , int> test = getSum();

            int sum = test.first , count = test.second;

            if(sum > res && sum <= totalTime){
                for(int i = 0 ; i < numberOfCDS ; i++)
                    result[i] = CDs[i] * chose[i];
                res = sum;
                Count = count;
            }else if(sum == res && count > Count){
                Count = count;
                for(int i = 0 ; i < numberOfCDS ; i++)
                    result[i] = CDs[i] * chose[i];
            }
        }
    }

}

void solve(){

    cin >> totalTime >> numberOfCDS;

    CDs.resize(numberOfCDS+5 , 0);
    chose.resize(numberOfCDS+5 , 0);
    result.resize(numberOfCDS+5 , 0);

    for(int i = 0 ; i < numberOfCDS ; i++)
        cin >> CDs[i];

    backtrack(0);

    for(int i = 0 ; i < numberOfCDS ; i++)
        if(result[i] != 0) cout << result[i] << " ";
    cout << "sum: " << res << endl;
}

int32_t main(){
	//FileInput();
	fast();    
	solve();
	return 0;	
}