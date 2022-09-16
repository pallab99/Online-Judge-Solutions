///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long int;
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
ll Strtoll(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
string llostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
vector<ll>Div;
void Func(ll n)
{
     for(int i=2;i*i<=n;i++)
       {
        while(n%i==0)
        {
            Div.push_back(i);
            n/=i;
        }
       }
       
    if (n != 1)
        Div.push_back(n); 

    ll a=1,b=1,c=1;
    for(int i=0;i<Div.size();i++)
    {
        if(a==1)
        a=a*Div[i];
        else if(b==1 || b==a)
        b=b*Div[i];
        else 
        c=c*Div[i];
    }
    if(a==1 || b==1 || c==1 || a==b || b==c || a==c)
    cout<<"NO"<<nn;
    else 
    cout<<"YES"<<nn<<a<<sp<<b<<sp<<c<<nn;
    }

int main()
{
	FasterIO
    test
    {
        ll n;
        cin>>n;
        Div.clear();
        Func(n);
	
    }
    return 0;
}