#include<bits/stdtr1c++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef vector<ll> v;
#define nn "\n"
#define     pb              push_back
#define     sc              cin
#define     pf              cout
#define     ss(v)           v.size()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         if(n==2)
            cout<<2<<endl;
        else if(n%2!=0)
            cout<<1<<endl;
         else if(n>2 && n%2==0)
         cout<<0<<endl;
     }
}
int main()
{
   ios;
   solve();
    return 0;
}