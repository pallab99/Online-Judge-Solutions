#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
//const int Size = 10e9;
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
void solve()
{
       int t;
       cin>>t;
       while(t--)
       {
           int n,x,e=0,o=0;
           cin>>n;
           for(int i=0;i<n;i++)
           {
               cin>>x;
               if(x%2==0)
                e=1;
               else
                o=1;
           }
           if(e&&o)
            cout<<"YES"<<endl;
           else if(n%2==1 && o)
            cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
}
int main()
{
   _0_;
   solve();
    return 0;
}