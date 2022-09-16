#include<bits/stdc++.h>
using namespace std;
int a[300000],k;
int incresing_subsegment(int n)
{
    if(n==1)
        return 1;
    k=1;
    int mx=-00;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
            k++;
        else
            k=1;

        mx=max(mx,k);
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<incresing_subsegment(n);
}