#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,t,m[10000],sum=0,c=0;
    cin>>p>>t;
    for(int i=1;i<=p;i++)
    {
         m[i]=5*i;
         sum+=m[i];
         if(sum+480+t<=720)
         {
             c++;
         }
         else if(m[i]+480+t>720)
             break;
    }
    cout<<c;
    return 0;
}