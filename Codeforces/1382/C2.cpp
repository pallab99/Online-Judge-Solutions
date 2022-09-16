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
string s,s1;
vii temp1,temp2,ans;
int main()
{
	  _00_
	  inout();
    test
    {
         s.clear();
         s1.clear();
         temp1.clear();
         temp2.clear();
         ans.clear();
         int n;
         cin>>n>>s>>s1;
         s+='0',s1+='0';
         for(int i=1;i<=n;i++)
         {
             if(s[i]!=s[i-1])
             temp1.push_back(i);
             if(s1[i]!=s1[i-1])
             temp2.push_back(i);
         }
         ans.insert(ans.end(),temp1.begin(),temp1.end());
         reverse(all(temp2));
         ans.insert(ans.end(),temp2.begin(),temp2.end());

         cout<<ans.size()<<sp;
         for(int i:ans)
         cout<<i<<sp;
         cout<<nn;
    }
	return 0;
}