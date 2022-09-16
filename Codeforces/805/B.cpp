#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char A='a',B='b',C='c';
    cin>>n;
    if(n==1)
        cout<<"a";
    else if(n==2)
        cout<<"aa";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%4==0 || i%4==1)
                cout<<"a";
            else
                cout<<"b";
        }
    }
}