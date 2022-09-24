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
       int s,v1,v2,t1,t2,sum1=0,sum2=0;
       cin>>s>>v1>>v2>>t1>>t2;
       sum1=s*v1+2*t1;
       sum2=s*v2+2*t2;
      // cout<<sum1<<ss<<sum2;
       if(sum1<sum2) cout<<"First"<<nn;

       else if(sum1>sum2) cout<<"Second"<<nn;
       else if(sum1==sum2) cout<<"Friendship"<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}