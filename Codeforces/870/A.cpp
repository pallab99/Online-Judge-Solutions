#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a,b,c;
    while(n--)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }
    while(m--)
    {
        int q;
        cin>>q;
        b.push_back(q);
    }
    int flag=0;
    for(auto i:a)
    {
        for(auto j:b)
        {
            if(i==j)
            {
                flag=1;
                c.push_back(i);
            }
        }
    }
    if(flag==0)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[0]<b[0])
            cout<<a[0]<<b[0]<<endl;
        else
            cout<<b[0]<<a[0]<<endl;
    }

    else
    {
        sort(c.begin(),c.end());
        cout<<c[0]<<endl;
    }
}