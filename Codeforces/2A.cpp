///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using ull= unsigned long long;
using pll= pair<ll,ll>;
using pii= pair<int,int>;
//-----------Typedefine-------------//
#define        nn           "\n"
#define        sp           " "
#define        F            first
#define        S            second
#define        OO           (1<<30)
#define        pi           acos(-1.0)
#define        no           cout<<"NO"<<endl;
#define        yes          cout<<"YES"<<endl;
#define        all(x)       (x).begin(),(x).end()
#define        deb(a)       cout<<" # "<<#a<<" -> "<<a<<endl;
#define        test         int t;cin>>t;for(int tc=1;tc<=t;tc++)
#define        _00_         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//---------------Function---------------//
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
map<string,int>mp,mp1;
string s[1001];
int main()
{
	  _00_
	  //inout();
    int n;
    cin>>n;
    vector<int>score(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>score[i];
        mp[s[i]]+=score[i];
    }
    int mx=-OO;
    for(auto i:mp)
    {
       mx=max(mx,i.S);
    }
    //deb(mx);
    string ans;
    for(int i=0;i<n;i++)
    {
        mp1[s[i]]+=score[i];
        if(mp1[s[i]]>=mx and mp[s[i]]==mx) 
        {
            ans=s[i];
            break;
        }
    }
    cout<<ans;
	return 0;
}