#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    string s1=s;
    reverse(s.begin(),s.end());
    map<char,int>mp;
    for(int i=0; i<l; i++)
        mp[s[i]]++;

    if(s!=s1)
        return cout<<l,0;
    else if(mp.size()==1)
        return cout<<0,0;
    else
        return cout<<l-1,0;

}