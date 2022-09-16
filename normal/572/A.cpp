#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,k,m;
    cin>>x>>y>>k>>m;
    int a[x],b[y];
    for(int i=0; i<x; i++)
        cin>>a[i];
    for(int i=0; i<y; i++)
        cin>>b[i];
    if(a[k-1]<b[y-m])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}