#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","r" ,stdin);
    int n,p;
    cin>>n;
    int sum=0,sum1=0,j,i;
    vector<int>a;
    for(i=0;i<n;i++)
    {
        cin>>p;
        a.push_back(p);
         sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        if(2*sum1>=sum)
            break;
    }

    cout<<i+1;
}