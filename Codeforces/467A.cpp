#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c=0;
    cin>>t;
    while (t--)
    {

        cin>>a>>b;
        if(b-a>=2)
            c++;
    }
    cout<<c<<endl;
}