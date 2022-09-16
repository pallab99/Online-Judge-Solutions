#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v,v+n);

    if(n%2==0)
    {
        int y=(n-1)/2;
        cout<<v[y];
    }
    else
    {
        int x=(n+1)/2;
        //cout<<x;
        cout<<v[x-1];
    }
}