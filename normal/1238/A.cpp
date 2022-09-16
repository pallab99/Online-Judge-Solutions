#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
const int Size = 10e4;
const int mx= 1000;
const int mn = -1000;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef vector<llu>v1;
typedef map<int,int>mii;
typedef map<string,int>msi;
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     printy       cout<<"YES"<<endl;
#define     printn       cout<<"NO"<<endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll n,m,t,x,y,z,sum=0;
string s,s1,s2;

void solve()
{
    cin>>t;
      while(t--)
      {
          cin>>n>>m;
          if(n-m>1)
            cout<<"YES"<<endl;
          else
          cout<<"NO"<<endl;
      }
}
int main()
{
    _0_;
    solve();
    return 0;
}