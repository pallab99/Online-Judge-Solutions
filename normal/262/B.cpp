#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mn=1e5,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0 && k>0)
            a[i]*=-1,k--;
        mn =min(mn,a[i]);
        sum+=a[i];
    }
    if(k%2==0)
        cout<<sum;
    else
        cout<<sum-mn*2;

}