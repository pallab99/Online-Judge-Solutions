#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long c=0,i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
            c+=2;

    }
         if(i*i==n)c++;
    cout<<c;
}