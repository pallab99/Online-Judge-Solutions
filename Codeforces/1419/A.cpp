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
int main()
{
	  _00_
	  //input();
      test
      {
          int n;
          cin>>n;
          vii v;
          for(int i=0;i<n;i++)
          {
              char ch;
              cin>>ch;
              v.push_back(ch-'0');
          }
          if(v.size()==1)
          {
             if(v.front()%2)
             cout<<1<<nn;
             else 
             cout<<2<<nn;

          }
          else 
          {

             if(n&1)
             {
                bool flag=0;
                 for(int i=0;i<v.size();i+=2)
                 {
                     if(v[i]%2)
                     flag=1;
                 }
                 if(flag)
                 cout<<1<<nn;
                 else 
                 cout<<2<<nn;
             }
            else
             {
                bool flag=0;
                 for(int i=1;i<v.size();i+=2)
                 {
                     if(v[i]%2==0)
                     flag=1;
                 }
                 if(flag)
                 cout<<2<<nn;
                 else 
                 cout<<1<<nn;
             }
          }
      }
	  return 0;
}