#include<bits/stdc++.h>
#define s 1000
using namespace std;
int a[s],n,i,j,sw;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                sw=a[j];
                a[j]=a[j+1];
                a[j+1]=sw;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}