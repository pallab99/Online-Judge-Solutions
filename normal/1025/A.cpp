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
int freq[10010];
///----------------- substring generator--------------------///

int pera()
{
    cin>>n;
     cin>>s;
     if(n==1)
     {
         haha
         return 0;
     }
     for(int i=0;i<s.size();i++)
     {
         if(s[i]>='a' && s[i]<='z')
         {
             freq[s[i]-97]++;
         }
     }
     for(int i=0;i<26;i++)
     {
         if(freq[i]>=2)
            temp=1;
     }
     if(temp==1) haha
        else oono
}
///------------------ main code -------------------///
int main()
{
    _0_;
      //freopen("input.txt","r" ,stdin);
      pera();
    return 0;
}