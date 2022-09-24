///hare krishna
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ROYGBIV";
    int i,n;
    cin>>n;
    cout<<s;
    for(i=0;i<n-7;i++)
    {
        cout<<s[i%4+3];
        //i++;
    }
    return 0;
}