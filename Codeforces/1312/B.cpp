///Have faith in god.
#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<stdio.h>
#include<conio.h>
#include<stack>
#include<queue>
#include<cmath>
#include<cstring>
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

///------------------ main code -------------------///
int main()
{
    _0_;
      //freopen("input.txt","r" ,stdin);
      int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n,greater<int>());
         for(int i=0;i<n;i++)
         {
             cout<<a[i]<<" ";
         }
         cout<<endl;
    }
    return 0;
}