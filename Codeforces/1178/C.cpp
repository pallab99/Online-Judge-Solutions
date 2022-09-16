#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=1;
    cin>>n>>m;
    for(int i=0;i<n+m;i++)
    ans=(ans*2)%998244353;

    cout<<ans;
}