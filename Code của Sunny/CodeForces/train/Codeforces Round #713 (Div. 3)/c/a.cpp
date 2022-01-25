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

bool isPan(string s){
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}

void solve(){

    int a , b;
    cin >> a >> b;

    string s;
    cin >> s;

    int n = s.size();

    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1' && s[n-i-1] == '?'){
            s[n-i-1] = '1';
            b -= 2;
        }else if(s[i] == '0' && s[n-i-1] == '?'){
            s[n-i-1] = '0';
            a -= 2;
        }else if(s[i] == '1' && s[n-i-1] == '1' && i < n-i-1){
            b -= 2;
        }
        else if(s[i] == '0' && s[n-i-1] == '0' && i < n-i-1){
            a -= 2;
        }else if(s[i] != s[n-i-1] && s[i] != '?' && s[n-i-1] != '?'){
            cout << -1 << endl;
            return;
        }
    }

    int i = n/2-1 , j = n/2;
    if(n % 2 == 1)
        j++;

    while(i >= 0 && j < n){
        if(s[i] == '?' && s[j] == '?'){
            if(b > 1){
                s[i] = '1';
                s[j] = '1';
                b -= 2;
            }else if(a > 1){
                s[i] = '0';
                s[j] = '0';
                a -= 2;
            }else{
                cout << -1 << endl;
                return;
            }
        }
        i--;
        j++;
        //cout << s << endl;
    }

    if(n % 2 == 1){
        if(s[n/2] == '?'){
        if(b > 0)
            s[n/2] = '1';
        else if(a > 0) 
            s[n/2] = '0';
        else{
            cout << -1 << endl;
            return;
        }
        }else{
            if(a > 0 && s[n/2] == '0'){
                cout << s << endl;
                return;
            }
            else if(b > 0 && s[n/2] == '1'){
                cout << s << endl;
                return;
            }
            else{
                cout << -1 << endl;
                return;
            }
        }
    }

    if(!isPan(s)){
        cout << -1 << endl;
        return;
    }

    cout << s << endl;

}

int32_t main(){
	FileInput();
	fast();    
	
	int t;
    cin >> t;
    while(t--)
	
	solve();
	return 0;	
}