#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; 
    cin>>n>>k;
    int num[n];
   for(int i=0;i<n;++i)
    cin>>num[i];
   int pockets = 0;
   for(int i=0;i<n;++i)
   {
      if(num[i]%k==0)
      pockets+=num[i]/k;
      else 
      pockets+=num[i]/k+1;
   }
   if(pockets%2==0)
    cout<<pockets/2;
   else
    cout<<pockets/2+1;
}