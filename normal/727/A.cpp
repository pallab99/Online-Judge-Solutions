///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
///-------------------Typedefine---------------------///
typedef unsigned long long int ll;
typedef vector<ll> v;
typedef map<int,int> mm;
typedef map<string,int> mp;
typedef pair<int,int> pii;
const int MOD = 1000000007;
const ll N = 200000;

///-------------------functions----------------------///
bool is_vowel_up(char c){return c == 'A' | c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
//int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
ll toInt(string s){ll r=0;istringstream sin(s);sin>>r;return r;}
inline int add(int a, int b) { return a + b >= MOD ? a + b - MOD : a + b; }
inline int sub(int a, int b) { return a - b < 0 ? a - b + MOD : a - b; }
inline int mul(int a, int b) { return (a * 1LL * b) % MOD; }
inline int gcd(int a, int b) { return b ? gcd (b,a%b): a; }
inline int lcm(int a, int b) { return a / gcd (a,b) * b; }
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     SS(v)        v.size()
#define     pi           acos(-1.0)
#define     CLR(a)       memset(a,0,sizeof(a))
#define     SET(a)       memset(a,-1,sizeof(a))
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     INF9         2147483647
#define     INF18        9223372036854775807
#define     deb(x)       cout << #x << " " << x << endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll a,b;
v dp;
int DP(ll a)
{
    if(a>b)
        return 0;
    if(a==b)
        return 1;
    if(DP(a*2))
    {
        dp.pb(a*2);
        return 1;
    }
    if(DP(a*10+1))
    {
        dp.pb(a*10+1);
        return 1;
    }
}
int main()
{
   // _0_;
      //freopen("input.txt","r" ,stdin);
      cin>>a>>b;
      if(DP(a)==1)
      {
        dp.pb(a);
        cout<<"YES"<<nn<<dp.size()<<nn;
        reverse(all(dp));
        for(auto i:dp)
            cout<<i<<ss;
      }
      else
        cout<<"NO"<<nn;
    return 0;
}