#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     ss              " "
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
       ll x,y,z,a,b,k,u,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            x=k/2;
            y=x*a-x*b;
            cout<<y<<endl;
        }
        else if(k%2!=0)
        {
             x=k-1;
             u=x/2;
             y=u*a-u*b;
             z=y+a;
             cout<<z<<endl;
        }

    }
}
int main()
{
   ios;
   solve();
    return 0;
}