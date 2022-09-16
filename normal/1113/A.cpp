#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    if(n<=m)
        cout<<n-1;
    else
    {
        for(int i=1; i<=n-m; i++)
            sum+=i;

        cout<<sum+m-1;
    }




}