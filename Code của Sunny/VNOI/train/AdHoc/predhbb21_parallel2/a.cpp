#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> x >> y;
        if((x<= 1 && y <= 2)||(x <= 2 && y <= 1))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
