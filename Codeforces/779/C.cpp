///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
using ull = unsigned long long int;
//=============Typedefines=============//
#define        sp           " "
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
#define        deb(a)       cerr<<"Line "<<__LINE__<<" # "<<#a<<" -> "<<a<<nn;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
template<typename T>T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void input()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
vector<pii>res;
bitset<200020>taken;
int main()
{
	  _00_
	  //input();
     
      int n,k;
      cin>>n>>k;
      vii a(n),b(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>b[i];
      for(int i=0;i<n;i++)
         res.push_back({a[i]-b[i],i});

      sort(all(res));
      ll ans=0;
      for(int i=0;i<k;i++)
      {
          ans+=a[res[i].S];
          taken[res[i].S]=1;
      }
      for(int i=0;i<n;i++)
      {
          if(!taken[i])
          ans+=min(a[i],b[i]);
      }
      cout<<ans;
	  return 0;
}