///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll  = long long int;
using ull = unsigned long long int;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
//=============Typedefines=============//
#define        sp           " "
#define        nn           "\n"
#define        F            first
#define        S            second
#define        pb           push_back
#define        mp           make_pair
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<nn;
#define        yes          cout<<"YES"<<nn;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cerr<<" # "<<#a<<" -> "<<a<<nn;
#define        test         int t,tc;cin>>t;for(tc=1;tc<=t;tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//=============Functions===============//
ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
vector<int>tree[100020];
double dfs(int src,int par)
{
    double res=0.00;
    for(auto i:tree[src])
    {
        if(par==i)
        continue;
        res+=(dfs(i,src)+1)/(tree[src].size()-(src!=1));
        //deb(res);
    }
    return res;
}
int main()
{
	  _00_
	 // inout();
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
         int u,v;
         cin>>u>>v;
         tree[u].pb(v);
         tree[v].pb(u);
    }
   double ans= dfs(1,0);
  printf("%.15f",ans);
	return 0;
}