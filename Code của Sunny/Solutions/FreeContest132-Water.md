# Solution : Free Contest 132 - Water
### Writer : SunnyYeahBoi - Minh Phương Vũ
Link : [Free Contest 132 - Water](https://oj.vnoi.info/problem/fc132_water)


### Để giải được bài toán ta chia thành 2 phần:

 - **Phần 1 : Làm sao để tính được lượng nước với dãy h[i] cho trước?**
		 
	- Với một **h[i]** ta có thể dễ dàng nhận thấy, ô thứ **i** có chứa nước khi tồn tại một cột cao hơn **h[i]** ở bên trái của **i** và tương tự với bên phải  của **i**.
		
	- Để tính được lượng nước có tại ô thứ **i** ta làm như sau: với mỗi **h[i]**, ta đi tìm cột có độ cao lớn nhất về bên trái và độ cao lớn nhất về bên phải sau đấy lượng nước đọng lại tại ô thứ **i** sẽ bằng **min(h[j] , h[k]) - h[i]**
		 **(với h[j] = max(h[1]...h[i-1]) và h[k] = max(h[i+1]...h[n]) )**
		 
 -  **Phần 2: Làm sao để tính được lượng nước tối đa tăng được với một **h[i]** khi nó tăng lên 1 đơn vị?**

	- Với mỗi **h[i]**, lượng nước chỉ tăng chỉ khi chỉ tồn tại **duy nhất một phía trái hoặc phải có** h[j] cao hơn (với j khác i).
	
	- Nếu **h[i]** thỏa mãn điều kiện trên, ta sẽ tính lượng nước tăng lên khi tăng **h[i]** lên 1 đơn vị.
	
	- Ta có thể dễ dàng tính bằng cách: tìm cột **j** với **h[j]** > **h[i]** và **abs(j - i) là nhỏ nhất**

### Thanks For Reading ♥

# Code mẫu: 

```c++
	/* 
    Cred : SunnyYeahBoi 
    May Not Be The Smartest But Always Try My Best <3
	*/

	#include "bits/stdc++.h"

	using namespace std;

	//___Defines
	#define TaskName "a"
	#define FastInput()   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#define FileInput() if(TaskName != ""){freopen(TaskName".inp" , "r" , stdin);freopen(TaskName".out" , "w" , stdout);}
	#define int long long
	#define endl "\n"

	//___Constants
	const double Pi = acos(-1.0);
	const int INF = INT_MAX;

	//___Structs
	/*It's not empty ;-; what are u thinking about huh >:CCC*/

	//___Variables

	class Solution{
	    public:
	    int startAmount(int n , vector<int>& height){
	        vector<int> leftTallest(n) , rightTallest(n);
	        leftTallest[0] = height[0];
	        for(int i = 1 ; i < n ; i++)
	            leftTallest[i] = max(leftTallest[i-1] , height[i]);
	        rightTallest[n-1] = height[n-1];
	        for(int i = n-2 ; i >= 0 ; i--)
	            rightTallest[i] = max(rightTallest[i+1] , height[i]);

	        int res = 0;

	        for(int i = 1 ; i < n-1 ; i++){
	            if(height[i] > leftTallest[i-1] || height[i] > rightTallest[i+1])
	                continue;

	            res += min(leftTallest[i-1] , rightTallest[i+1]) - height[i];
	            //cout << min(leftTallest[i-1] , rightTallest[i+1]) << " " << height[i] << endl;
	        }

	        //cout << res << endl;
	        return res;
	    }

	    int maximumIncreaseAfterOp(int n , vector<int>& height){
	        vector<int> q;
	        vector<int> leftmostBigger(n) , rightmostBigger(n);
	    
	        for(int i = 0 ; i < n ; i++){
	            while(!q.empty() && height[q.back()] <= height[i])
	                q.pop_back();
	            if(q.empty()){
	                leftmostBigger[i] = -1;
	            }else leftmostBigger[i] = q.back();
	            q.push_back(i);
	        }

	        q.clear();

	        for(int i = n-1 ; i >= 0 ; i--){
	            while(!q.empty() && height[q.back()] <= height[i])
	                q.pop_back();
	            if(q.empty()){
	                rightmostBigger[i] = -1;
	            }else rightmostBigger[i] = q.back();
	            q.push_back(i);
	        }

	        q.clear();

	        int res = 0;

	        for(int i = 0 ; i < n ; i++){
	            if(leftmostBigger[i] > -1 && rightmostBigger[i] > -1)
	                continue;

	            int tmp = 0;

	            if(leftmostBigger[i] > -1)
	                tmp = i - leftmostBigger[i] - 1;
	            else tmp = rightmostBigger[i] - i - 1;
	            res = max(res , tmp);
	        }

	        return res;
	    }
	};

	void solve(){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0 ; i < n ; i++) cin >> a[i];
	    Solution Sol;
	    cout << Sol.startAmount(n , a) + Sol.maximumIncreaseAfterOp(n , a) << endl;
	}

	int32_t main(){
	    //FileInput();// For Some Specific Problems
	    FastInput();// OMG It's OVER 9000 (⊙_⊙;)
	    int t = 1;
	    //cin >> t;
	    while(t--){// For Constructive Problems
	        solve();
	    }
	    return 0;
	}

```
