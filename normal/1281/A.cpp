#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l=s.size();
        if(s[l-2]=='p' && s[l-1]=='o')
        cout<<"FILIPINO"<<endl;
        else if(s[l-5]=='m' && s[l-4]=='n' && s[l-3]=='i' && s[l-2]=='d' && s[l-1]=='a')
        cout<<"KOREAN"<<endl;
        else
            cout<<"JAPANESE"<<endl;
    }


    return 0;
}