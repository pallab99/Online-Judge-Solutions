#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
   ll n,m,a[200010];
     cin>>n>>m;
     for(ll i=1;i<=n;i++)
     {
         cin>>a[i];
     }
     if(n>m)
     {
         cout<<0<<endl;
         return 0;
     }
     ll ans=1;
     for(ll i=1;i<=n;i++)
     {
         for(ll j=i+1;j<=n;j++)
         {
             ans*=abs(a[i]-a[j])%m;
             ans%=m;
         }
     }
     cout<<ans;
}