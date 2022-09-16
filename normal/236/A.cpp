#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string ch;
    int c=0,i;
    cin>>ch;
    int d=ch.length();
    sort(ch.begin(),ch.end());
    for(i=1;i<d;i++)
    {
        if(ch[i]!=ch[i-1])
        c++;
    }
    if((c+1)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}