#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0,sum1=0;
    int t=8;
    while(t--)
    {
        cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Q')
            sum+=9;
          if(s[i]=='R')
            sum+=5;
            if(s[i]=='B')
            sum+=3;
            if(s[i]=='N')
            sum+=3;
            if(s[i]=='P')
            sum+=1;
            if(s[i]=='K')
            sum+=0;
            if(s[i]=='q')
            sum1+=9;
            if(s[i]=='r')
            sum1+=5;
            if(s[i]=='b')
            sum1+=3;
            if(s[i]=='n')
            sum1+=3;
            if(s[i]=='p')
            sum1+=1;
            if(s[i]=='k')
            sum1+=0;
    }
    }


    if(sum>sum1)
        cout<<"White"<<endl;
    else if(sum<sum1) cout<<"Black"<<endl; else cout<<"Draw"<<endl;
}