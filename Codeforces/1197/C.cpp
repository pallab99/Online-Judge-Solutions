#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+10];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int sum=0;
    int t[n-1];
    int mn=INT_MAX,mx=INT_MIN;
    int s=0;
    if(n==k)
        return cout<<0,0;
    else if(k==1)
    {
        for(int i=0; i<n; i++)
        {
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        return cout<<mx-mn,0;
    }
    for(int i=0; i<n-1; i++)
        t[i]= a[i+1]-a[i];
    sort(t,t+n-1);
    int ans=0;
    for(int i=0; i<n-k; i++)
        ans = ans+t[i];
    cout<<ans;
}