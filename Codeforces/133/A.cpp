#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    //strupr(s);
    int d=strlen(s);
    for(int i=0;i<d;i++)
    {
        if(s[i]=='H' || s[i]=='9' || s[i]=='Q'){

        cout<<"YES"<<endl;
        return 0;
        }
    }
            cout<<"NO"<<endl;
    return 0;
}