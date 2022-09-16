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
   ll t;
  cin>>t;
  while(t--){
    ll x, y;
    cin>>x>>y;
    if(y<=x || x>3) cout<<"YES"<<endl;
    else if((x==2 || x==3) && y<4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

    return 0;
}