#include<bits/stdc++.h>
using namespace std;
pair <int,int> p[100001];
int main ()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p+1,p+n+1);
    int flag=0;
    for(int i=1; i<n; i++)
    {
        if(p[i].second>=p[i+1].second)
        {
            flag=1;
        }
    }
    if(flag)
    cout<<"Happy Alex";
    else
    cout<<"Poor Alex";
    return 0;
}