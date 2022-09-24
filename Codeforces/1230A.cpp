#include<bits/stdc++.h>
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
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    ll a,b,c,d;
    sc>>a>>b>>c>>d;
    if(a+b==c+d || a+c==b+d || a+d==b+c || a+b+c==d || a+b+d==c || a+c+d==b || b+c+d==a)

         cout<<"YES";
    else
        cout<<"NO";


    //if()
    return 0;
}