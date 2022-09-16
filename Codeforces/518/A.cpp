#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    cin>>a>>b;
     int i;
    for( i=strlen(a)-1;a[i]=='z'; i--)
            a[i]='a';
        a[i]++;
        //cout<<a<<endl;
    if(strcmp(a,b)==0)
        cout<<"No such string";
        else
    cout<<a;
}