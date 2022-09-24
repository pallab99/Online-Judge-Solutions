#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,x;
        cin>>n>>m;
        if (n>m)
        {
            x=m;
        }
        else
        {
            x=n;
        }
        if (x%2 == 0)
        {
            cout<<"Malvika"<<endl;
        }
        else
        {
            cout<<"Akshat"<<endl;
        }
}