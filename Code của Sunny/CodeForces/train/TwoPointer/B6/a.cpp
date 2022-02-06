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

/*

Note : First Solution (without 2 stack trick)

void solve(){

    int n , k;

    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    multiset<int> count;
    int l = 0 , res = 0;

    for(int r = 0 ; r < n ; r++){
        count.insert(a[r]);
        int min = -INF , max = INF;
        min = *count.begin();
        max = *count.rbegin();
        while(max - min > k){
            count.erase(count.find(a[l]));
            //cout << "d " << a[l] << " ";
            l++;
            if(!count.empty()){
                min = *count.begin();
                max = *count.rbegin();
            }
            //cout << l << " " << max << " " << min << endl;
        }
        //cout << r << " " << l << " " << max << " " << min << endl;

        res += r - l + 1;
    }

    cout << res << endl;
}

*/

struct sstack{

    vector<int> s , smin = {LLONG_MAX} , smax = {LLONG_MIN};

    void push(int a){
        s.push_back(a);
        smin.push_back(min(a , smin.back()));
        smax.push_back(max(a , smax.back()));
    }

    bool empty(){
        return s.empty();
    }

    void pop(){
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
    }

    int minn(){
        return smin.back();
    }

    int maxx(){
        return smax.back();
    }

    void print(){

        for(int i = 0 ; i < s.size() ; i++)
            cout << s[i] << " ";
        cout << endl;

        for(int i = 1 ; i < smin.size() ; i++)
            cout << smin[i] << " ";
        cout << endl;

        for(int i = 1 ; i < smax.size() ; i++)
            cout << smax[i] << " ";
        cout << endl;

    }

};

int n , k;
vector<int> a(100005);
sstack stack1 , stack2;

void add(int a){
    stack2.push(a);
}

void remove(){
    if(stack1.empty()){
        while(!stack2.empty()){
            stack1.push(stack2.s.back());
            stack2.pop();
        }
    }

    stack1.pop();
}

bool gud(){

    int mn = min(stack1.minn() , stack2.minn());
    int mx = max(stack1.maxx() , stack2.maxx());

    return mx - mn <= k;

}

void solve(){

    cin >> n >> k;

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int l = 0 , res = 0;

    for(int r = 0 ; r < n ; r++){

        add(a[r]);

        while(!gud()){
            remove();   
            l++;
        }

        cout << l << " " << r << endl; 
        cout << "s1" << endl;
        stack1.print();
        cout << endl;
        cout << "s2" << endl;
        stack2.print();
        cout << endl;

        res += r - l + 1;
    }

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

/*

7 3
2 6 4 3 6 8 9

*/