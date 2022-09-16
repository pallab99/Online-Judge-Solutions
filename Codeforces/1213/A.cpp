#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x&1)
            c++;
    }
    cout<<min(c,n-c)<<endl;
}