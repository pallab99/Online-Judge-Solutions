#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(mn<a[i] && a[i]<mx)
            cnt++;
    }

    cout<<cnt;
}