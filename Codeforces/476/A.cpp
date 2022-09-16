#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
if(n<m)
    return cout<<-1,0;
//else if(n==m)
    //return cout<<m,0;
int x=(n+1)/2;
int j;
for(int i=x;i<=n;i++)
{
    if(i%m==0)
    {
        j=i;
        break;
    }
}
    cout<<j;
}