#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>isprime;
ll prime[1000100];
void sieve()
{
    memset(prime, 1,sizeof prime);
    prime[0]=0;
    prime[1]=0;
    for(ll i=2; i<=1000000; i++)
    {
        if(prime[i])
        {
            for(ll j=2; i*j<=1000000; j++)
                prime[i*j]=0;
                isprime.insert(i*i);
        }
    }
}
int main()
{
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //ll x=n;
        //uto it=find(isprime.begin(),isprime.end(),n);
        if(isprime.find(n)!=isprime.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}