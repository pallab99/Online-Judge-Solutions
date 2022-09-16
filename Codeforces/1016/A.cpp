#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
     int x[n+1];
    for(int i=0;i<n;i++)
    {

        cin>>x[i];
       sum+=x[i];
        cout<<sum/m<<" ";
        sum%=m;
    }
    cout<<endl;
}