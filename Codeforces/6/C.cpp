#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], dp[n],dp1[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        dp[i]=a[i];
        dp1[i]=a[i];
    }
    int cnt=0,cnt1=0;
    for(int i=1; i<n; i++)
        dp[i]+=dp[i-1];
    for(int i=n-2; i>=0; i--)
        dp1[i]+=dp1[i+1];
    for(int i=0; i<n; i++)
    {

        //cout<<dp[i]<<" "<<dp1[i]<<endl;
        if(dp[i]<=dp1[i])
            cnt++;
        else
            cnt1++;
    }
    cout<<cnt<<" "<<cnt1;
}