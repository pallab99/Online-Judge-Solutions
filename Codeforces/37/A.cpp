#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,c=-00;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
        c=max(c,mp[a]);
    }
    cout<<c<<" "<<mp.size();

}