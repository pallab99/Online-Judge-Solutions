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
#define     SS(v)        v.size()
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
      int n,a[10000];
    cin>>n;
    if(n==1)
    {
        cout<<"O";
        return 0;
    }
    else if(n==2)
    {
        cout<<"OO";
        return 0;
    }
   else if(n==3)
    {
        cout<<"OOO";
        return 0;
    }
    else if(n==5)
    {
        cout<<"OOOoO";
        return 0;
    }
    if(n>5)
    {
         a[0]=0,a[1]=1;
    for(int i=2; i<n; i++)
    {
        a[i] =a[i-1]+a[i-2];
        if(a[i]>n)
        {
         //a[i]=0;
            break;
        }
    }
    char s[10000];
    int x=0,i,j;
    for(i=6,j=6;i<=n;i++)
    {
        if(i==a[j])
          {
              s[x++]='O';
              j++;
          }
          else s[x++]='o';
    }
      s[x]='\0';
      cout<<"OOOoO"<<s<<endl;
    }


    return 0;
}