#include<bits/stdc++.h>
using namespace std;
int a[1000];
bool vis[1000];
int main()
{
    int n;
    cin>>n;
    memset(vis,0,sizeof vis);
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(!vis[a[i]])
            cnt++;
        for(int j=i; j<=n; j++)
        {
            if(a[j]%a[i]==0)
                vis[a[j]]=1;
        }
    }
    cout<<cnt;
}