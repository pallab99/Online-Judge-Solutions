#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    regex l("WUB");
    cout<<regex_replace(s,l," ");
}