#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]<s1[i])
            return cout<<"-1",0;
    }

    cout<<s1;
}