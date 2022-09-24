#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin>>s;
    char c='a';
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<=c)
        {
            s[i]=c;
            c++;
        }
        if(c>'z')
            return cout<<s,0;
    }
    cout<<-1;
}