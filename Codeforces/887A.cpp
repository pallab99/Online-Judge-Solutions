#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c1=0,c0=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            c1=1;
            if(c1==1)
            {
                if(s[i]=='0')
                     c0++;
            }

    }
    if(c0>=6)
        cout<<"yes";
    else cout<<"no";
}