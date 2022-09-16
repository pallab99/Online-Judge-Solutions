#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,n,ans=0;
    cin>>t;
    while(t--)
    {
     ans=0;
     cin>>n;
        if(n<=9)
            ans =n;
        else if(n<=100)
        {
            ans=9;
        ans+=n/11;
        }

        else if(n<=1000)
        {
            ans=18;
            ans+=n/111;
        }
        else if(n<=10000)
        {
            ans=27;
            ans+=n/1111;
        }
        else if(n<=100000)
        {
            ans=36;
            ans+=n/11111;
        }
        else if(n<=1000000)
        {
            ans=45;
            ans+=n/111111;
        }
        else if(n<=10000000)
        {
            ans=54;
            ans+=n/1111111;
        }
        else if(n<=100000000)
        {
            ans=63;
            ans+=n/11111111;
        }
        else if(n<=1000000000)
        {
            ans=72;
            ans+=n/111111111;
        }


        cout<<ans<<endl;


    }
    return 0;
}