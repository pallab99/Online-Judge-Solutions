///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
///-------------------Typedefine---------------------///
typedef long long  ll;
typedef unsigned long long  llu;
typedef vector<ll> v;
typedef map<ll,ll> mm;
typedef map<string,ll> mp;
typedef pair<ll,ll> pii;
///-------------------functions----------------------///
bool is_vowel_up(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';
}
bool is_vowel_low(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
}
//ll fx[]={1,1,1,0,-1,-1,-1,0},fy[]={-1,0,1,1,1,0,-1,-1};
ll toll(string s)
{
    ll r=0;
    istringstream sin(s);
    sin>>r;
    return r;
}
#define     nn           "\n"
#define     ss           " "
#define     pb           push_back
#define     SS(v)        v.size()
#define     gcd(a,b)     __gcd(a,b)
#define     lcm(a,b)     (a*b)/gcd(a,b)
#define     pi           acos(-1.0)
#define     all(x)       (x).begin(), (x).end()
#define     haha         cout<< "YES" <<endl;
#define     oono         cout<< "NO" <<endl;
#define     _0_          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define     MOD          4294967296
#define     INF9         2147483647
#define     INF18        9223372036854775807
ll ara[200010];
 v o;
int main()
{
     _0_;
    //freopen("input.txt","r" ,stdin);
    ll t,a;

    cin>>t;
    while(t--)
    {
        o.clear();
        ll cnt=0;
        ll n,k;
        cin>>n>>k;
        for(ll i=1; i<=n; i++)
        {

            cin>>a;
            ara[i]=a;
            if(a%2!=0)
                cnt++, o.pb(i);
        }
        if(cnt<k || cnt%2!=k%2)
        {
            oono
            continue;
        }

            else
            {
                haha
                for(ll i=0; i<k-1; i++)
                    cout<<o[i]<<ss;
                    cout<<n;
                cout<<nn;
            }
    }
    return 0;
}