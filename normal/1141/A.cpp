#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    ll n,m,c=-1;
    cin>>n>>m;
    if(m%n==0)
    {
        c=0;
        ll ans=m/n;
        while(ans%2==0)
         {
            ans/=2;
             c++;
         }
        while(ans%3==0)
         {
             ans/=3;
             c++;
         }
        if(ans!=1)
            c=-1;
    }
    cout<<c<<nn;
    return 0;
}