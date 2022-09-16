#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;++i)
    {
        int p;
        cin>>p;
        p=abs(p);
        sum+=p;
    }
    cout<<sum;
}