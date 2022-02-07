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

struct sstack{

    vector<int> s;
    vector<bitset<1100>> sbit = {1};



    void push(int a){
        s.push_back(a);
        bitset<1100> &aa = sbit.back();
        sbit.push_back(aa | (aa << a));
    }

    void pop(){
        s.pop_back();
        sbit.pop_back();
    }

    bool empty(){
        return s.empty();
    }

    bitset<1100> bits(){
        return sbit.back();;
    }

    void print(){
        
        for(int i = 0 ; i < s.size() ; i++)
            cout << s[i] << " ";
        cout << endl;
        cout << sbit.back() << endl;
    }

};

sstack stack1 , stack2;
int n , s;
vector<int> a(100005);
int res = INF;

void add(int a){
    stack2.push(a);
}

void remove(){
    if(stack1.empty()){
        while(!stack2.empty()){
            int a = stack2.s.back();
            stack1.push(a);
            stack2.pop();
        }
    }

    stack1.pop();
}

bool good(){

    bitset<1100> bit1 = stack1.bits() , bit2 = stack2.bits();

    for(int i = 0 ; i <= s ; i++){
        if(bit1[i] == 1 && bit2[s - i] == 1)
            return true;
    }

    return false;
}

void solve(){

    cin >> n >> s;

    for(int i = 0 ; i <n ; i++)
        cin >> a[i];

    int l = 0;

    for(int r = 0 ; r < n ; r++){
        add(a[r]);

        while(good()){
            res = min(res , r - l + 1);
            remove();
            l++;
        
            /*
            cout << l << " " << r << endl;
            cout << "stack1" << endl;
            stack1.print();
            cout << "stack2" << endl;
            stack2.print();
            cout << endl;
            cout << (stack1.bits() | stack2.bits()) << endl;
            */
            }
            
        }

    if(res == INF)
        cout << -1 << endl;
    else cout << res << endl;
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