#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,sum=0;
    cin>>n>>d;
    int a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    cin>>m;
    int x=min(m,n);
    for(int i=0;i<x;i++)
    {
        sum+=a[i];
    }
    if(n<m)
    {
        sum-=(d*abs(m-n));
    }
    cout<<sum<<endl;
}