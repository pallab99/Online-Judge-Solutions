#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];
    stable_sort(&a[0],&a[n]);
    int ans=a[n-1];
    cout<<ans<<" ";

    for(int i=n-1; i>0; i--)
    {
        if(ans%a[i]!=0)
        {
            cout<<a[i]<<endl;
            break;
        }
        else if(a[i]==a[i-1])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
}