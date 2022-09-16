#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=-00,flag=0;
    vector<int>v;
    int p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
        if(v[i]>v[i-1])
            flag++;
        else flag=1;
        mx=max(mx,flag);
    }
    cout<<mx;

}