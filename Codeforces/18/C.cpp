#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum1=0,sum2=0,i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    int cnt=0;
    for(int j=0;j<i-1;j++)
    {
        sum2+=a[j];
        if(2*sum2==sum1)
            cnt++;
    }
    cout<<cnt<<endl;
}