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
//ll mx=INT_MAX,mn=INT_MIN;
//bool flag=false,flag1=false,flag2=false;
string s,s1,s2;

///------------------ main code -------------------///
int main()
{
    _0_;
    //freopen("input.txt","r" ,stdin);
    //char s[100000],*p;
    cin>>s;
    for(int i=0; i<SS(s); i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            for(int j=i+2; j<SS(s); j++)
            {
                if(s[j]=='B' && s[j+1]=='A')
                {
                    haha
                    return 0;
                }
            }
        }
        else if(s[i]=='B' && s[i+1]=='A')
        {
            for(int j=i+2; j<SS(s); j++)
            {
                if(s[j]=='A' && s[j+1]=='B')
                {
                    haha
                    return 0;
                }
            }
        }
    }
    oono
    return 0;
}