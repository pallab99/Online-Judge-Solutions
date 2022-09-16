#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
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
#define 	s(a)         scanf("%lld",&a)
#define 	ss(a,b)      scanf("%lld %lld",&a,&b)
#define 	sss(a,b,c)   scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,m,t,x,y,z,sum=0;
string s,s1,s2;


int solve()
{
    cin>>s;
    x=-1;
    n=s.size()-1;
    for(int i=0; i<n; i++)
    {
        if((s[i]-'0')%2==0)
        {
            x=i;
            if(s[n]>s[i])
                break;
        }
    }
    if(x==-1)
        cout<<-1<<endl;
    else
    {
        swap(s[x],s[n]);
        cout<<s<<endl;
    }


}
int main()
{
    _0_;
    solve();
    return 0;
}