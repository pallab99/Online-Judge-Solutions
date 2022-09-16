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
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     loop            for(int i=0;i<n;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll n,c=0;
   sc>>n;
   c+=n/100;
   n%=100;
   c+=n/20;
   n%=20;
   c+=n/10;
   n%=10;
   c+=n/5;
   n%=5;
   c+=n/1;
   n%=1;
   cout<<c<<endl;
    return 0;
}