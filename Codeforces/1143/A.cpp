#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            a=i;
            ///cout<<a;
        }
        else
            b=i;
        ///cout<<b;
    }

    cout<<min(a,b)+1;
}