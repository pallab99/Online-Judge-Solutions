#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a;
    int mn=1000;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a>0 && a<=k)
            mn=min(mn,abs(m-i));
    }
    cout<<mn*10;
}