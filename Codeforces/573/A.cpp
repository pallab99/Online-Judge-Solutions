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
     while(a[i]%3==0)
        a[i]/=3;
     while(a[i]%2==0)
        a[i]/=2;
        if(a[i]!=a[0])
            return cout<<"NO",0;
}

    cout<<"YES";
}