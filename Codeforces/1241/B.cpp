#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        int flag=0;
        cin>>s>>s1;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<s1.size(); j++)
            {
                if(s[i]==s1[j])
                {
                    flag++;
                    break;
                }

            }
        }

        if(flag>0)
            cout<<"YES"<<endl;
        else
            cout<<"No"<<endl;
    }
}