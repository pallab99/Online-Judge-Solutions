#include<bits/stdc++.h>
#import<ios>
using namespace std;
#define ll long long int
int main()
{
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ll x=abs(a-b)+abs(a-c)+abs(b-c);
        if(x>4)
            cout<<x-4<<endl;
        else
            cout<<"0"<<endl;
    }
}