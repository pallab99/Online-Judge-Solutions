///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
const int sz= 200000;

#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        mod          1000000007
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        test         int t;cin>>t;while(t--)
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll To_int(string str){stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string To_string(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
bool vowel_up(char c){return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
template<typename T>T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template<typename T>T lcm(T a,T b){if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
#ifdef LOCAL
#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void dbg(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " -> " << a << endl;
    dbg(++it, args...);
}
#endif
void inout()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
    #endif
}
struct FenwickTree
{
	ll N;
	vector<ll> tree;
 
	void init(ll n)
	{
		N = n;
		tree.assign(n + 1, 0);
	}
 
	void update(ll idx, ll val)
	{
		while (idx <= N)
		{
			tree[idx] += val;
			idx += idx & -idx;
		}
	}
 
	void updateMax(ll idx, ll val)
	{
		while (idx <= N)
		{
			tree[idx] = max(tree[idx], val);
			idx += idx & -idx;
		}
	}
 
	ll pref(ll idx)
	{
		ll ans = 0;
		while (idx > 0)
		{
			ans += tree[idx];
			idx -= idx & -idx;
		}
		return ans;
	}
 
	ll rsum(ll l, ll r)
	{
		return pref(r) - pref(l - 1);
	}
 
	ll prefMax(ll idx)
	{
		ll ans = -2e9;
		while (idx > 0)
		{
			ans = max(ans, tree[idx]);
			idx -= idx & -idx;
		}
		return ans;
	}
};
 
int main()
{
	  _00_
	  inout();
      ll n,m,c;
      cin>>n>>m>>c;
      FenwickTree Bit;
      Bit.init(n);
      while (m--)
      {
          char ch;
          cin>>ch;
          if(ch=='Q')
          {
              ll x;
              cin>>x;
              cout<<Bit.pref(x)+c<<nn;
          }
          else 
          {
              ll u,v,k;
              cin>>u>>v>>k;
              Bit.update(u,k);
              Bit.update(v+1,-k);
          }
      }
      
	return 0;
}