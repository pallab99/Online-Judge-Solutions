#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int j=1;
    for(int i=0;i<s.size();)
    {
        cout<<s[i];
        j++;
        i+=j;
    }
}