#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='a' && s[i+1]!='a')
                    s[i]='a';
                if(s[i-1]!='b' && s[i+1]!='b')
                    s[i]='b';
                if(s[i-1]!='c' && s[i+1]!='c')
                    s[i]='c';
            }
            if(s[i]==s[i+1])
                s="-1";
        }
        cout<<s<<endl;
    }
}