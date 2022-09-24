#include<bits/stdc++.h>
using namespace std;
int a[10000],i,n,sum,sum1,j,p,k;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    i=0;
    j=n-1;
    k=0;
    sum=0;
    sum1=0;
    while(i<=j)
    {
        {
            if(k%2==0)
            {
                if(a[i]>=a[j])
                {
                    sum+=a[i];
                    i++;
                }
                else
                {
                    sum+=a[j];
                    j--;
                }
            }
            else
            {
                if(a[i]>=a[j])
                {
                    sum1+=a[i];
                    i++;
                }
                else
                {
                    sum1+=a[j];
                    j--;
                }
            }
        }
        k++;
    }
cout<<sum<<" "<<sum1<<endl;
return 0;
}