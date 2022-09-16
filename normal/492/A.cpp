#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a[1000]={0},sum1=0,j,flag=0,flag1=0,k;
    cin>>n;
    if(n==1)
    {
        cout<<1;return 0;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=i;
       // cout<<sum;
        a[i]=sum;
        sum1+=a[i];
         if(sum1==n)
        {
            k=i;
            flag=1;
            break;
        }
        else if(sum1>n)
        {
            j=i;
            flag1=1;
            break;
        }

}
if(flag1==1)
   cout<<j-1;
   else if(flag==1)
    cout<<k;
}