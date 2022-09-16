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
      int n,m,p,p1,mx=-00,mx1=-00,a[1000],b[1000];
      int sum;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          mx=max(mx,a[i]);
      }
      cin>>m;
      for(int i=0;i<m;i++)
      {
          cin>>b[i];
          mx1=max(mx1,b[i]);
      }
      cout<<mx<<ss<<mx1<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}