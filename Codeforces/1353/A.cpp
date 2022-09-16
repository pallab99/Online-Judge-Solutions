#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
            cout<<0<<endl;
        else if(a==2)
            cout<<b<<endl;
        else
            cout<<(2*b)<<endl;
    }
    return 0;
}