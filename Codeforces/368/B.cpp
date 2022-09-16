#include<bits/stdc++.h>
using namespace std;
int n,m,l,a[100000];
set<int>s;
int main()
{

    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        a[i]=s.size();
    }

    while(m--)
    {
        cin>>l;

        cout<<a[l-1]<<endl;
    }
}