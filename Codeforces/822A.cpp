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
void solve()
{
      ll a,b,ans=1;
      cin>>a>>b;
      ll x=min(a,b);
      for(int i=1;i<=x;i++)
      {
          ans*=i;
      }
      cout<<ans<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}