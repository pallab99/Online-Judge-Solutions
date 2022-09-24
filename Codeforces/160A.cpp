#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{
   vi v;
   int n,x,i,sum=0,ans=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
{
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
for(i=0;i<n;i++)
{
    sum+=v[i];
}
sum=sum/2;
while(ans<=sum)
{
    c++;
    ans+=v[n-c];
}
     cout<<c<<nn;
    return 0;
}