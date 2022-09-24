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
#define     ss              " "
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     ios             ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,d,sum=0,p,vv[10000];
void solve()
{
     cin>>n>>d;
     for(int i=0;i<n;i++)
     {
         cin>>vv[i];
         sum+=vv[i];
     }
     if(sum+(n-1)*10>d)
     {
         cout<<-1<<endl;
     }
     else
        cout<<abs(sum-d)/5<<endl;
}
int main()
{
   ios;
   solve();
    return 0;
}