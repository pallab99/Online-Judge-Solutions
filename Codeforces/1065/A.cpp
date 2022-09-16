#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long s,a,b,c;
        cin>>s>>a>>b>>c;
        long long x=s/c;

        long long t=x/a;
        long long z=t*b;

        cout<<x+z<<endl;

    }
}