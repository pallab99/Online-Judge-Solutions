#include<bits/stdc++.h>
using namespace std;
int n,a[1000000+100];
long long ans;
int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    for (int i=1; i<=n; i++)
        ans+=abs(a[i]-a[i-1]);
    cout<<ans<<endl;
    return 0;
}