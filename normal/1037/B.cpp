#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n,i,mid,s;
    ll a[200010];
     cin>>n>>s;
        for(i=0;i<n;i++)
            scanf("%lld",a+i);
        sort(a,a+n);

        mid = n/2;
       ll sum = 0;

        if(s==a[mid])
            cout<<0;
        else if(a[mid]<s)
        {
            for(i=mid;i<n;i++)
            {
                if(a[i]<s)
                    sum+=abs(a[i]-s);
            }
            cout<<sum;
        }
        else
        {
            for(i=mid;i>=0;i--)
            {
                if(a[i]>s)
                    sum+=abs(a[i]-s);
            }
           cout<<sum;
        }


    return 0;
}