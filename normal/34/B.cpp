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
void solve()
{
v vec;
int n,m,p,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<m;i++)
    {
        if(vec[i]<0)
            sum+=vec[i];
    }
    cout<<abs(sum)<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}