///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
///-------------------Typedefine---------------------///
typedef unsigned long long int ll;
typedef vector<ll> v;
typedef map<ll,ll> mm;
typedef map<string,ll> mp;
typedef pair<ll,ll> pii;
const ll MOD = 1000000007;
const ll N   = 200000;
///-------------------functions----------------------///
bool is_vowel_up(char c){return c == 'A' | c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c){return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
int fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
ll Strtoll(string str){stringstream ss(str);ll x = 0;ss >> x ;return x ;}
string llostr(ll x){stringstream ss; ss << x; string str = ss.str(); return str;}
inline ll add(ll a, ll b) { return a + b >= MOD ? a + b - MOD : a + b; }
inline ll sub(ll a, ll b) { return a - b < 0 ? a - b + MOD : a - b; }
inline ll mul(ll a, ll b) { return (a * 1LL * b) % MOD; }
inline ll gcd(ll a, ll b) { return b ? gcd (b,a%b): a; }
inline ll lcm(ll a, ll b) { return a / gcd (a,b) * b; }
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
int main()
{
   _0_;
      //freopen("input.txt","r" ,stdin);
      string s;
      cin>>s;
      int n=s.size();
      if(s[0]!='a')
        return cout<<"NO",0;
      else
      {
          int A=0,B=0,C=0,j,k,l,m,x;
          for(char c:s)
          {
              if(c=='a')
                A++;
              if(c=='b')
                B++;
              if(c=='c')
                C++;
          }
          //deb(A);
          //deb(B);
          //deb(C);
          for(int i=0;i<n;i++)
          {
              if(s[i]=='a')
              {
                  j=i;
                  break;
              }
          }
          for(int i=n;i>0;i--)
          {
              if(s[i]=='a')
              {
                  k=i;
                  break;
              }
          }
          //deb(j);
          //deb(k);
          for(int i=k+1;i<=n;i++)
          {
              if(s[i]=='c')
              {
                  x=i;
                  break;
              }
          }
          int ok=0;
          for(int i=k+1;i<=x;i++)
          {
              if(s[i]!='c')
              {
                  ok=1;
                  break;
              }
          }
          int flag=0,flag1=0;
          for(int i=j;i<=k;i++)
          {
              if(s[i]=='b' || s[i]=='c')
              {
                  flag=1;
                  break;
              }
          }
          //deb(flag);
          for(int i=0;i<n;i++)
          {
              if(s[i]=='b')
              {
                  l=i;
                  break;
              }
          }
          for(int i=n;i>0;i--)
          {
              if(s[i]=='b')
              {
                  m=i;
                  break;
              }
          }
          ///deb(l);
          //deb(m);
          for(int i=l;i<=m;i++)
          {
              if(s[i]=='a' || s[i]=='c')
              {
                  flag1=1;
                  break;
              }
          }
          //deb(flag1);
          if((C==A || C==B) && (!flag && !flag1 && ok))
             cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
      }
    return 0;
}