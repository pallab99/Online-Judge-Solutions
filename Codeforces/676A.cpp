#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    int mn=INT_MAX,mx=INT_MIN;
    int x,y;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            x=i;
        if(a[i]==n)
            y=i;
    }
    int ans;
    if(x<y)
        ans=max(abs(n-x),abs(1-y));
    else
        ans=max(abs(n-y),abs(1-x));


    cout<<ans;
}