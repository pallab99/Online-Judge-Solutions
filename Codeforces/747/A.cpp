#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int s=sqrt(n);
    for(i=s;i>0;i--)
    {
        if(n%i==0)
       break;
    }

    cout<<i<<" "<<n/i;
}