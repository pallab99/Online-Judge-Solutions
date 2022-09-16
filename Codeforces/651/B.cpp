#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    map<int,int>mp;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }
    for(auto it:mp)
    {
         mx=max(mx,it.second);
    }
    //cout<<mx<<endl;
    cout<<n-mx;
}