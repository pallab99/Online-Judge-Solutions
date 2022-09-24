#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>odd,even;
    while(n--)
    {
        int a;
        cin>>a;
        if(a%2==0)
            even.push_back(a);
        else
            odd.push_back(a);
    }
    int sum=0;
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int x=even.size();
    int y=odd.size();
    if(x==y)
        cout<<0;
    else if(x>y)
    {
        for(int i=0; i<x-y-1; i++)
            sum+=even[i];
        cout<<sum;
    }
    else if(y>x)
    {
        for(int i=0; i<y-x-1; i++)
            sum+=odd[i];
        cout<<sum;
    }

}