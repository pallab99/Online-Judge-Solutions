#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(abs(i+1-a[i]));
    }
    cout<<sum;
}