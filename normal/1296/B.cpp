#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll n,ans=0,t,t1;
         cin>>n;
         ans+=n;
         while(n>9)
         {
             t=n/10;
             t1=n%10;
             n=t+t1;
             ans+=t;
         }
         cout<<ans<<endl;
     }
}
int main()
{
   ios;
   solve();
    return 0;
}