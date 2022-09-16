#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>e,o;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
            e.push_back(a);
        else o.push_back(a);
    }

    if(o.size()%2==0)
    {
        cout<<e.size();
    }
     else
    cout<<o.size();
}