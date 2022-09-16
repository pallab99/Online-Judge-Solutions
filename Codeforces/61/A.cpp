#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s,s1;
    cin>>s>>s1;
    for(auto i=0;i<s.size();i++)
    {
        if(s[i]==s1[i])
            cout<<0;
            if(s[i]!=s1[i])
                cout<<1;
    }

}