#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;

    for(int i=1;s.size()<=10000;i++)
        s+=to_string(i);

    cin>>k;

    cout<<s[k-1];
}