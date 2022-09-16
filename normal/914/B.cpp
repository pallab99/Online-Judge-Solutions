
///Have faith in god.
#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

///-------------------Typedefine---------------------///

typedef long long int ll;
const ll Size = 10e6;
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
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     forn(i, n)   for (int i=0;i<int(n);i++)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

///----------------- variables --------------------///

ll n,m,t,x,y,z,sum=0,temp=0;
ll mx=INT_MAX,mn=INT_MIN;
bool flag=false,flag1=false,flag2=false;
string s,s1,s2;

///----------------- substring generator--------------------///

map<int,int> mp;
int pera()
{

      int n;
      cin>>n;
      int a;
     while(n--)
      {
          cin>>a;
          mp[a]++;
      }

      for(int i=1;i<=10e5;i++)
      {
          if(mp[i]%2==1)
          {
              cout<<"Conan"<<endl;return 0;
          }
      }

      cout<<"Agasa"<<endl;
}
///------------------ main code -------------------///
int main()
{
    _0_;
     // freopen("input.txt","r" ,stdin);
      pera();
    return 0;
}