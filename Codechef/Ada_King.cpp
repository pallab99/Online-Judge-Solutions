///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//=============Typedefines=============//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        pi           acos(-1.0)
#define        inf          1<<30 //2^30
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        test         int t;cin>>t;for(int tc=1;tc<=t;tc++)
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
char mat[9][9];
int main()
{
	  _00_
	  //inout();
    test
    {
       for(int i=1;i<=8;i++)
       {
          for(int j=1;j<=8;j++)
          mat[i][j]='.';
       }
       int k;
       cin>>k;
       int rem=64-k;
       for(int i=1;i<=8;i++)
       {
           for(int j=1;j<=8;j++)
           {
               if(i==8 and j==8)
               {
                   if(mat[i][j]=='.')
                   mat[i][j]='O';
               }
               else if(rem)
               {
                   if(mat[i][j]=='.')
                   {
                       mat[i][j]='X';
                       rem--;
                   }
               }
           }
       }
       for(int i=1;i<=8;i++)
       {
          for(int j=1;j<=8;j++)
          cout<<mat[i][j];
       cout<<nn;
       }
       cout<<nn;
    }
	return 0;
}