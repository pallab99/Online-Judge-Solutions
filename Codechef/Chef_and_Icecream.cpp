#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ara[20000];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);    
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        ll n,sum=5;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>ara[i];
        }
        if(ara[0]!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else 
        {
            for(int i=1;i<n;i++)
            {
                if(sum>=ara[i]-5)
                {
                  flag=true;
                  sum+=ara[i]-5;
                }
                else 
                flag=false;
               
            }
            if(flag)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
}