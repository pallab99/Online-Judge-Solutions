#include<bits/stdc++.h>
using namespace std;
signed main()
{
    long long a,b;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        if(a>=2*b)
        {
            a%=2*b;
            //cout<<a<<endl;
        }
        else if(b>=a*2)
        {
            b%=2*a;
            //cout<<b<<endl;
        }
        else break;
    }

    cout<<a<<" "<<b;
}