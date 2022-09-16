#include<bits/stdc++.h>
using namespace std;
int  main()
{
    double n,m,a,b,mm=100000000;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        double ans=(a/b)*m;
        if(mm>ans)
            mm=ans;
    }
    printf("%.8lf",mm);
    return 0;
}