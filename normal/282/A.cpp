#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,c=0;
    cin>>t;
    while (t--)
    {
        cin>>s;
        if(s[0]=='-' || s[2]=='-'){
            c=c-1;
        }
            else if (s[0]=='+' || s[2]=='+'){
                c=c+1;
            }
    }
    cout<<c<<endl;
    return 0;
}