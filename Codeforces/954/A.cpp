#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if((s[i]=='R' && s[i+1]=='U')||(s[i]=='U' && s[i+1]=='R'))
        {
            i+=1;
            c++;
        }
    }
    cout<<n-c;
}