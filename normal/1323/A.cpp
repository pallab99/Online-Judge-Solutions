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
#define     ss          " "
#define     pb           push_back
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
int aa[1000];
v e,o;
///------------------ main code -------------------///
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    int a;
    cin>>t;
    while(t--)
    {
        int even=0,odd=0;
        e.clear();
        o.clear();
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            aa[i]=a;
            if(a%2==0)
                even++,e.pb(i);
            else
                odd++,o.pb(i);
        }
        if(n==1 && a%2!=0)
            cout<<-1<<endl;
      else if (even)
        {
            cout<<1<<endl;
            cout<<e[0]+1<<endl;
        }
         else
         {
             cout<<2<<endl;
             cout<<o[0]+1<<ss<<o[1]+1<<endl;
         }
    }
    return 0;
}