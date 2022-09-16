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
#define     loop            for(int i=0;i<n;i++)
#define     ios            ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    ios;
    ll n,ans=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if((s[i]-'0')%2==0)
            ans+=(i+1);
    }
    cout<<ans<<nn;
    return 0;
}