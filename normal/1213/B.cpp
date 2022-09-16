#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++)
         cin>>v[i];
        int mn=INT_MAX,c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>mn)
                c++;
            mn=min(mn,v[i]);
        }
        cout<<c<<endl;
    }
}