#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
int main()
{
    ll n,a,m=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;

       if(a>m)
        m=a;
       sum+=a;
      // cout<<sum;
    }
    cout<<n*m-sum<<nn;
}