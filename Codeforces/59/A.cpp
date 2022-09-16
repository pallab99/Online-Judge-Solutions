#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,e=0,d=0;
    char c[100];
    cin>>c;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='A' && c[i]<='Z'){
            e++;
        }
        else if(c[i]>='a' && c[i]<='z')
            d++;
    }
    if(e>d)
    {
        strupr(c);
        cout<<c<<endl;
    }

    else if(e<=d)
    {
        strlwr(c);
        cout<<c<<endl;
    }
}