#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
   ll k,n,counter=0,sum=0;
   cin>>k;
   ll ans=k/2;
   cout<<ans<<nn;
     if(k%2==0)
     {
         for(int i=1;i<=k/2;++i)
         {
             cout<<2<<" ";
         }
     }
     else
     {
         for(int i=1;i<=(k/2)-1;i++)
         {
             cout<<2<<" ";

         }
         cout<<3;
     }
     cout<<nn;
    return 0;
}