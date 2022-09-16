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
int a[55][55],b[55][55];
vector<pii>ans;
int main()
{
	  _00_
	  //input();
     int n,m;
     cin>>n>>m;
     for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
     cin>>a[i][j];
     for(int i=0;i+1<n;i++)
     {
         for(int j=0;j+1<m;j++)
         {
             if(a[i][j]==1 and a[i][j+1]==1 and a[i+1][j]==1 and a[i+1][j+1]==1)
            {
                b[i][j]=b[i][j+1]=b[i+1][j]=b[i+1][j+1]=1;
                ans.push_back({i+1,j+1});
            }
         }
     }
     bool flag=true;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         if(a[i][j]!=b[i][j])
         flag=false;
     }
     if(!flag)
     puts("-1");
     else 
     {
         cout<<ans.size()<<nn;
         for(auto i:ans)
         cout<<i.F<<sp<<i.S<<nn;
     }
	  return 0;
}