#include <bits/stdc++.h>
using namespace std; 
  
int minSwaps(int arr[], int n) { 
  int noOfOnes = 0; 
  for (int i = 0; i < n; i++) { 
    if (arr[i] == 1) 
      noOfOnes++; 
  } 
  int x = noOfOnes; 
  int maxOnes = INT_MIN; 
  int preCompute[n] = {0}; //Mảng cộng dồn, lưu số lượng số 1 của dãy con từ A1 tới An
  cout << x << endl;

  if (arr[0] == 1) 
    preCompute[0] = 1; 
  for (int i = 1; i < n; i++) { 
    if (arr[i] == 1) { 
      preCompute[i] = preCompute[i - 1] + 1; 
    } else
      preCompute[i] = preCompute[i - 1]; 
  } 
  
  for (int i = x - 1; i < n; i++) { 
    if (i == (x - 1))  
      noOfOnes = preCompute[i]; 
    else 
      noOfOnes = preCompute[i] - preCompute[i - x]; 
    
    //cout << noOfOnes << endl;
    if (maxOnes < noOfOnes) 
      maxOnes = noOfOnes; 
  } 

  int noOfZeroes = x - maxOnes; 
  return noOfZeroes; 
} 
const int maxN = 1e6+5;
int n;
int a[maxN]; 
int main() { 
    freopen("MINGROUP1.inp","r",stdin);
    freopen("MINGROUP1.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    cout << minSwaps(a, n); 
    return 0; 
}