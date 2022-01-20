// Link : 
// Author : MinhPhuongVu A.K.A SunnyYeahBoii

/* 
Code Ideal: I'm too lazy for something like this .__.
*/

#include "bits/stdc++.h"

using namespace std;

#define NAME "SPECSUBSTR"
#define fast()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileInput() if(NAME != "remizdabest"){freopen(NAME".inp" , "r" , stdin);freopen(NAME".out" , "w" , stdout);}
#define int long long
#define endl "\n"
#define INF 1 << 30

char Vowels[] ={'u' , 'e' , 'o' , 'a' , 'i'};

bool isVowel(char x){
    for(int i = 0 ; i < 5 ; i++){
        if(Vowels[i] == x)
            return true;
    }
    return false;
}

void solve(){

    string s;
    cin >> s;
    int n = s.size();

    vector<int> prefix_vowel(s.size()+1) , prefix_consonant(s.size()+1);

    if(isVowel(s[0])){
        prefix_vowel[0] = 1;
        prefix_consonant[0] = 0;
    }else{
        prefix_vowel[0] = 0;
        prefix_consonant[0] = 1;
    }

    for(int i = 1 ; i < n ; i++){
        prefix_consonant[i] = prefix_consonant[i-1];
        prefix_vowel[i] = prefix_vowel[i-1];

        if(isVowel(s[i]))
            prefix_vowel[i]++;
        else prefix_consonant[i]++;    
    }

    int res = 0;

    if(prefix_vowel[0] == 1)
        res += prefix_consonant[n-1];
    else res += prefix_vowel[n-1];

    for(int i = 1 ; i < n ; i++){
        if(isVowel(s[i]))
            res += prefix_consonant[n-1] - prefix_consonant[i];
        else res += prefix_vowel[n-1] - prefix_vowel[i];
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