#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x=0,m=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        x-=a;
        x+=b;
        if(x>m)
            m=x;

    }
     cout<<m<<endl;

    return 0;
}