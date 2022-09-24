#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,p,x,temp;
    cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    cin>>q;
    for(int j=0;j<q;j++)
    {
        cin>>x;
        temp=upper_bound(ar,ar+n,x)-ar;
        cout<<temp<<endl;
    }
    return 0;
}