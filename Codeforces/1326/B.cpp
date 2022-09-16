#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,sum,mx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum=mx+a;
        cout<<sum<<" ";
        if(sum>mx)
            mx=sum;
    }
}