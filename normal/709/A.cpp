///Have faith in god.
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
int n,m,t,x,y,z,sum=0,temp=0,cnt=0,mx=10e9,mn=-10e9;
string s,s1,s2;

///------------------ main code -------------------///
int main()
{
    _0_;
cin>>n>>m>>x;
int z[n+10];
for(int i=0;i<n;i++)
{
    cin>>z[i];
    if(z[i]<=m)
    sum+=z[i];
    if(sum>x)
    {
        sum=0;
        cnt++;
    }
}
cout<<cnt;
    return 0;
}