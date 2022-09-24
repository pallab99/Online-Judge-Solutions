#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-a[i+1])==1)
            {
                c=1;
             // break;
            }
        }
        if(c==0)
        cout<<1<<endl;
        else cout<<2<<endl;
    }
}