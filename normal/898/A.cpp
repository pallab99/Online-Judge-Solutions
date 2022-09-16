#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int sum=0,sum1=0;
    int l;
    l=n%10;
    //cout<<l<<endl;
    sum=abs(l-0);
    //cout<<sum<<endl;
    sum1=abs(l-10);
    //cout<<sum1<<endl;
    if(sum<=sum1)
        cout<<abs(n-l);
    else if(sum>=sum1)
                 cout<<abs(n+sum1);
}