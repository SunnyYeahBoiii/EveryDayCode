#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,d;
    cin>>n;
    int a[n],f[n];
    for (int i=1 ; i<=n ; i++)
        cin>>a[i];
    f[1]=1;
    d=1;
    for (int i=2 ; i<=n ; i++)
    {
        if (a[i]>a[f[d]])
        {
            d+=1;
            f[d]=i;
        }
        else
        {
            int dau,cuoi,k;
            dau=1;
            cuoi=d;
            while (dau<cuoi)
            {
                k=(dau+cuoi)/2;
                if (a[f[k]]<a[i])
                    dau=k+1;
                else
                    cuoi=k;
            }
            f[dau]=i;
        }
    }
    cout<<d;
    for(int i = 1 ; i <= d ; i++)
	    cout << a[f[i]] << " ";
    return 0;
}

