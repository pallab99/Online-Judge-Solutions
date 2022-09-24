#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int i,c=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {

        if(s[i]==s[i+1])
            c++;
    }

    cout<<c<<endl;

}