#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
       else if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
            cout<<n/2<<endl;
    }
}