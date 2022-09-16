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
     string s,c1,c2,c3,c4,c5;
     cin>>s>>c1>>c2>>c3>>c4>>c5;
     if((s[0]==c1[0] || s[1]==c1[1])||(s[0]==c2[0] || s[1]==c2[1])|| (s[0]==c3[0] || s[1]==c3[1])||(s[0]==c4[0] || s[1]==c4[1])|| (s[0]==c5[0] || s[1]==c5[1]))
        cout<<"YES"<<nn;
     else
        cout<<"NO"<<nn;
}
int main()
{
   ios;
   solve();
    return 0;
}