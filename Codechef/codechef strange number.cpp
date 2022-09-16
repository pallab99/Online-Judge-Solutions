#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll primediv(ll n)
{
    ll res=0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                res++,n/=i;
            }
        }
    }
    return res+(n>1);
}
int main()
{
    ll t,k,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(primediv(x)>=k)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
