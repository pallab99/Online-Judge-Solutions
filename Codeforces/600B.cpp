#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+10],b[m+10];

    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);

    for(int i=0;i<m;i++)
    cin>>b[i];

    for(int i=0;i<m;i++)
    {
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(b[i]>=a[mid])
                l=mid+1;
            else r=mid-1;
        }
        cout<<l<<" ";
    }
}