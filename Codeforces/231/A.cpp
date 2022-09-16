#include<bits/stdc++.h>
using namespace std;
int p,v,t,c=0,d=0,e=0,f=0,n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1)
            c++;
        else if(p==1 && v== 0 && t==1)
            d++;
        else if(p==1 && v==1 && t==0)
            e++;
            else if(p==0 && v==1 && t==1)
            f++;
    }
    int sum=c+d+e+f;
    cout<<sum<<endl;


}