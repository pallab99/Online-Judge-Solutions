///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long ;
const ll N = 200000;
#define     nn         "\n"
#define     sp         " "
#define     pb         push_back
#define     inf        1000000000
#define     ff         first
#define     ss         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",stdin)
#define     Fout       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define   Precision(a) cout << fixed << setprecision(a)
#define     test       ll t;cin>>t;while(t--)	
#define     deb(a)    cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
///-------------------functions----------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
int main()
{
	FasterIO
    ll n,m;
    cin>>n>>m;
    map<ll,bool>used;
     ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        used[x]=true;
    }
    vector<ll>ans;
    for(ll i=1;i<m+1;i++)
    {
        if(used[i])
        continue;
        if(i>m)
        break;
        m-=i;
        ans.push_back(i);
    }
    cout<<ans.size()<<nn;
    for(auto i:ans)
    cout<<i<<sp;
	return 0;
}