#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0,j=0;
    cin>>n>>m;
    int a[10000],b[10000];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
            if(a[i]<=b[j])
            {
                 c++;
                j++;
            }
    }
    if(c>m) cout<<m;
    else cout<<c;
}