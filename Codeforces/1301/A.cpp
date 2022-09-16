#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
const int Size = 10e9;
const int mx= 1000;
const int mn = -1000;
typedef long long int ll;
typedef unsigned long long int llu;
typedef vector<ll>v;
typedef vector<llu>v1;
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     sc           cin
#define     pf           cout
#define     ss(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            string sub=s.substr(i, len);
        }
    }
}
int solve()
{
     int t;
     cin>>t;
     while(t--)
     {
         bool flag=false;
         string a,b,c;
         cin>>a>>b>>c;
         for(int i=0;i<a.size();i++)
         {
             if(a[i]!=c[i] && c[i]!=b[i])
             {

                flag=true;
             }
         }
         if(flag==true)
            cout<<"NO"<<nn;
         else
         cout<<"YES"<<nn;
     }
}
int main()
{
    _0_;
    solve();
    return 0;
}