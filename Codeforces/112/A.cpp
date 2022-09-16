#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[1000];
    int c=0,i;
   cin>>a;
   cin>>b;
    strlwr(a);
    strlwr(b);
    c=strcasecmp(a,b);
    if(c==0)
        cout<<"0"<<endl;
    else if(c>0)
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;
}