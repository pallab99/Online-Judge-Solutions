#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nn "\n"
typedef vector<int> vi;
#define pb push_back
int main()
{
     ll k,l,m,n,d,c=0;
   cin>>k>>l>>m>>n>>d;
   for(int i=1;i<=d;i++)
{
    if(i%k==0)
      c++;
    else if(i%l==0)
      c++;
    else if(i%m==0)
      c++;
    else if(i%n==0)
      c++;
}
cout<<c<<nn;
    return 0;
}