#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lld;
typedef unsigned long long int ulld;
typedef vector<lld> v;
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
int x,y,sum=0,t,m=1000,mn;
void solve()
{
       cin>>t;
       while(t--)
       {
           cin>>x>>y;
           m=min(m,y);
           sum+=m*x;
       }
       cout<<sum<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}