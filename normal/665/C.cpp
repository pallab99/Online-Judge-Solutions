#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            if(s[i]!='a' && s[i+1]!='a') s[i]='a';
           else if(s[i]!='b' && s[i+1]!='b') s[i]='b';
           else if(s[i]!='c' && s[i+1]!='c') s[i]='c';
        }
    }
    cout<<s;
}