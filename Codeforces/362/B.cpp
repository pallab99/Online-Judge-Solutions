#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+10];
    for(int i=0; i<m; i++)
        cin>>a[i];

    sort(a,a+m);
    if(a[0]==1 || a[m-1]==n)
        return cout<<"NO",0;

    for(int i=0; i<m; i++)
    {
        if(a[i+1]-a[i]==1 and a[i]-a[i-1]==1)
            return cout<<"NO",0;
    }
    cout<<"YES";
}