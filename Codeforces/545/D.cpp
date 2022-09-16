#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

///-----------------Compiler Optimization--------------------///
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///

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
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     forn(i, n)   for (int i=0;i<int(n);i++)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

///----------------- variables --------------------///
int n,m,t,x,y,z,sum=0;
string s,s1,s2;

///----------------- substring generator--------------------///
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            string s1=s.substr(i,len);

        }
    }
}

///------------------ main code -------------------///
int main()
{

    _0_;


    int cnt=0;

    cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       if(a[i]>=sum)
       {
           cnt++;
       sum+=a[i];
       }

   }
   cout<<cnt;

    return 0;
}