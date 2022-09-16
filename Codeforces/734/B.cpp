#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum1=0,sum2=0;
    cin>>a>>b>>c>>d;
    int mx=min(min(a,c),d);
    int mn=min(b,a-mx);
    cout<<mx*256+mn*32;
}