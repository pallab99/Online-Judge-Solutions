#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
     double  n,a,sum=0;
    cin>>n;
    for( int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
      printf("%lf",sum/n);

}