///Have faith in god.
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,a[100010],p=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[a[a[i]]]==i)
        {
            p=1;
            break;
        }
    }
    if(p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  return 0;
}