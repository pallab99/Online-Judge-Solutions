#include<bits/stdc++.h>
using namespace std;
int a,b,r,x,c=0;
int main()
{
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        c++;
    }
    cout<<c<<endl;
}