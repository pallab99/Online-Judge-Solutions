#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
const int Size = 10e9;
const int mx= 1000;
const int mn = -1000;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef vector<llu>v1;
typedef map<int,int>mi;
typedef map<string,int>ms;
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     ss(v)        v.size()
#define 	s(a)            scanf("%lld",&a)
#define 	ss(a,b)         scanf("%lld %lld",&a,&b)
#define 	sss(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define precision(a) cout << fixed << setprecision(a)
void solve()
{

      ll t;
      s(t);
      while(t--)
      {
       ll x,y,a,b,z=0,zz=0;
       ss(x,y);
       ss(a,b);
       z=y-x;
       zz=a+b;
       if(z%zz==0)
            cout<<z/zz<<endl;
       else cout<<-1<<endl;
      }
}
int main()
{
    _0_;
    solve();
    return 0;
}