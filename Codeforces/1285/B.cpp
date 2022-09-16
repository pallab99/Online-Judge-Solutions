///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
typedef long long ll;
vector<ll>a(100010);
bool check()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        sum+=a[i];
        //deb(sum);
        if(sum<=0)
            return 0;
    }
    sum=0;
    for(ll i=n-1; i>=0; i--)
    {
        sum+=a[i];
        //deb(sum);
        if(sum<=0)
            return 0;
    }
    return 1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        if(check())
           cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }

    return 0;
}