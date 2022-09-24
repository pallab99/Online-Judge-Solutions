#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1,s2;
        cin>>s;
        int f=1;
        for(char c:s)
        {
            if(c=='0')
            {
                s1+='0';
                s2+='0';
            }
            else if(c=='1' && f)
            {
                s1+='1';
                s2+='0';
                f=0;
            }
            else if(c=='1' && !f)
            {
                s1+='0';
                s2+='1';
            }
            else if(c=='2' && f)
            {
                s1+='1';
                s2+='1';
            }
            else if(c=='2' && !f)
            {
                s1+='0';
                s2+='2';
            }
        }
        cout<<s1<<endl<<s2<<endl;
    }
}