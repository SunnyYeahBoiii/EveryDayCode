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

bool better(int a, int b , int s , int ss){
    double dif = (double)a / (double)b;

    if(s * dif >= ss)
        return true;
    return false;
}

int find(int a , int b , int s, vector<int>& s1 , vector<int>& s2){
    int i = 0 , j = 0;
    int cost = 0 , rest = s;

    /*
    cout << endl;
    for(int i = 0 ; i < s1.size() ; i++)
        cout << s1[i] << " ";
    cout << endl;

    for(int i = 0 ; i < s2.size() ; i++)
        cout << s2[i] << " ";
    cout << endl;
    */

    while(j < s2.size() && rest >= b){
        cost += s2[j];
        rest -= b;
        j++;
    }

    int res = cost;

    for(int i = 0 ; i < s1.size() ; i++){
        cost += s1[i];
        rest -= a;

        while(rest < 0 && j > 0){
            rest += b;
            cost -= s2[j-1];
            j--;
        }

        if(rest < 0)
            break;

        //cout << i << " " << j << " " << cost << " " << rest << endl;
        res = max(res , cost);
    }

    return res;
}

void solve(){

    int n , m , s , a , b;
    cin >> n >> m >> s >> a >> b;

    vector<int> s1(n) , s2(m);

    for(int i = 0 ; i < n ; i++)
        cin >> s1[i];

    for(int j = 0 ; j < m ; j++)
        cin >> s2[j];

    sort(s1.begin() , s1.end() , greater<int>());
    sort(s2.begin() , s2.end() , greater<int>());

    int res = find(a , b , s, s1 , s2);

    cout << res << endl;
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
