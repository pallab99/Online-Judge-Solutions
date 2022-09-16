#include<bits/stdc++.h>
using namespace std;
int a[1000003],b[1000003];
int n;
int Max(int i)
{
    if(a[i] == b[n-1])
        return b[n-2];
    else
        return b[n-1];
}
int main()
{
    cin>>n;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        sum+=b[i];
    }
    //cout<<sum<<endl;
    sort(b,b+n);
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int mx=Max(i);
        //cout<<mx;
        if((sum-(mx+a[i]))==mx)
            v.push_back(i);
    }

    int x=v.size();
    if(x==0)
        cout<<0;
    else
    {
        cout<<x<<endl;
        for(auto i:v)
            cout<<i+1<<" ";
    }
}