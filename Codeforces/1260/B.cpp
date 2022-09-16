///Have faith in god.
#include<bits/stdc++.h>
#include<algorithm>
#include<utility>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<map>
#include<set>
using namespace std;

///-------------------Typedefine---------------------///

typedef long long int ll;
const ll Size = 10e6;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef map<int,int>mm;
typedef map<string,int>mp;
#define     ts(t)        while(t--)
#define     nn           "\n"
#define     ss           " "
#define     MOD          1000000007
#define     pb           push_back
#define     SS(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     forn(i, n)   for (int i=0;i<int(n);i++)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

///----------------- variables --------------------///

ll n,m,t,x,y,z,sum=0,temp=0,c=0,cnt=0,c1=0;
ll mx=INT_MAX,mn=INT_MIN;
bool flag=false,flag1=false,flag2=false;
string s,s1,s2;

///------------------ main code -------------------///
signed main()
{
    _0_;
      //freopen("input.txt","r" ,stdin);
      cin>>t;
     while(t--)
      {
          int a,b;
         cin>>a>>b;
      if(a==0 && b==0)
      {
          haha
          continue;
      }
     
         if( a>b )
         {
             int temp=a;
             a=b;
             b=temp;

         }
         //cout<<a<<" "<<b;
        if( (a+b)%3 == 0 && b <= 2*a )
            haha
        else oono

      }
    return 0;
}