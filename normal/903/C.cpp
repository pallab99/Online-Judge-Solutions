#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    map<int,int>mp;
    int mx=-00;
    while(n--)
    {
        cin>>a;
        mp[a]++;

        mx=max(mx,mp[a]);
    }

    cout<<mx;
}