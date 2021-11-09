    //laptrinhsgu.wordpress.com
     
    #include <iostream>
     
    using namespace std;
     
    int main()
    {
    	int n,k;	
    	long long a[51],f[251];
    	cin>>n>>k;
    	for (int i=1;i<=k;i++)
    	   cin>>a[i];
    	for (int i=1;i<=n;i++) f[i]=0;
    	f[0]=1;
    //Optimize 
    	 for (int i=1;i<=k;i++)
    	    for (int j=a[i];j<=n;j++)
    		    f[j]=f[j]+f[j-a[i]];
    		cout<<f[n] << endl;;
    	for(int i = 0 ; i <= n ; i++)
		cout << i << " = " << f[i] << endl;
    }
