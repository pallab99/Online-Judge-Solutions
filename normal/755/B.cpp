#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[1000],s1[1000];
    for(int i=0;i<n;i++)
        cin>>s[i];

    for(int i=0;i<m;i++)
        cin>>s1[i];

        if(n>m)
    {
        return cout<<"YES",0;

    }
    else if(n<m)
    {
        return cout<<"NO",0;

    }
    int x,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            x=s[i].compare(s1[j]);
            if(x==0)
                cnt++;
        }
    }

if(cnt==0)
    cout<<"NO";
else if(cnt&1)
    cout<<"YES";
else cout<<"NO";
}