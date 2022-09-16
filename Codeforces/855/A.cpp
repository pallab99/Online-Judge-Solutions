#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"NO"<<endl;
        mp[s]++;
        }
        else
            cout<<"YES"<<endl;
    }
}