#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        int x=a-b;

        cout<<b<<" "<<x/2;

    }
    else if(a<b)
    {

        cout<<a<<" "<<(b-a)/2<<endl;
    }
    else if(a==b)
        cout<<b<<" "<<0<<endl;
    return 0;
}