#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     ss              " "
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int solve()
{
   int n,m,c=0;
   cin>>n>>m;
   if(n==1&&m==1)
   {
       cout<<2<<nn;
       return 0;
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i*i+j==n && i+j*j==m)
            c++;
       }
   }
   cout<<c;
}
int main()
{
   ios;
   solve();
    return 0;
}