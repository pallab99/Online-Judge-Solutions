#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int l,r;
    int a[1002];
    memset(a,0,sizeof a);
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        for(int j=l;j<=r;j++)
       a[j]++;
    }
    int cnt=0;
    for(auto i=1;i<=m;i++)
        {
            if(a[i]==0)
                cnt++;
        }
        cout<<cnt<<endl;
        for(int i=1;i<=m;i++)
        {
            if(a[i]==0)
                cout<<i<<" ";
        }
}