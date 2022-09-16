#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main()
{
    int n,m;
    cin>>n>>m;
    int mx;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int flag=0;
    mx=max(2*a[0],a[n-1]);
    if(mx>=b[0])
        cout<<-1;
    else
        cout<<mx;
}