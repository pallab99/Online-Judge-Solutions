#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(n%3==0 || n%7==0 || n%10==0 || n>11)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}