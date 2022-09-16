#import<ios>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,c=0,i,d;
    char a;
   cin>>n>>x;
   while(n--)
{

    cin>>a>>d;
    if(a=='+')
        x+=d;
    else if(x-d>=0)
        x-=d;
    else
        c++;
}

cout<<x<<" "<<c<<endl;

    return 0;
}