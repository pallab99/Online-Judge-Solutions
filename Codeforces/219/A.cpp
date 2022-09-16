#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int m[26];
    memset(m,0,sizeof m);
    for(auto i:s)
    {
        m[i-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(m[i]%k!=0)
            return cout<<-1,0;
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<26; j++)
        {
            int t=m[j]/k;
            while(t--)
                cout<<char(j + 'a');
        }
    }
    return 0;
}