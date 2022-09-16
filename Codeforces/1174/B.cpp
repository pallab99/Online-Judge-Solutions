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

///------------------ main code -------------------///
int main()
{
    _0_;
      //freopen("input.txt","r" ,stdin);
      cin>>n;
      v a;
      for(int i=0;i<n;i++)
      {
          int p;
          cin>>p;
          a.push_back(p);
          if(a[i]%2==0)
            cnt=1;
          else
            c=1;
      }

     if(cnt && c)
      stable_sort(a.begin(),a.end());
      for(auto i:a)
        cout<<i<<ss;

    return 0;
}