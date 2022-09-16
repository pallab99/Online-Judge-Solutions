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
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     haha         cout<<"YES"<<endl;
#define     oono         cout<<"NO"<<endl;
#define     forn(i,n)   for (int i=0;i<int(n);i++)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,m,t,x,y,z,sum=0;
string s,s1,s2;
void solve()
{
    cin>>n;
    int a[n+10];
    int Min=-00;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        Min=max(Min,a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==Min)
            sum++;
        else
        sum=0;
            x=max(x,sum);
    }
    cout<<x;
}
int main()
{
    _0_;
    solve();
    return 0;
}