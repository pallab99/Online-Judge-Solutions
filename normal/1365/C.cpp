///Have faith in god.
#include<bits/stdc++.h>
using namespace std;
///-------------------Typedefine---------------------///
using ll=long long;
using ull=unsigned long long int;
using vll=vector<ll>;
using mll=map<ll,ll>;
using pll=pair<ll,ll>;
using vii=vector<int>;
using mii=map<int,int>;
using pii=pair<int,int>;
#define     nn         "\n"
#define     sp         " "
#define     F         first
#define     S         second
#define     pi         acos(-1.0)
#define     Fin        freopen("input.txt","r",stdin)
#define     Fout       freopen("output.txt","w",stdout)
#define     all(x)     (x).begin(), (x).end()
#define     haha       cout<< "YES" <<endl;
#define     oono       cout<< "NO" <<endl;
#define     REP(a,n)      for(int i=a;i<n;i++)
#define     rep(b,n)      for(int i=b;i>0;i--)
#define   Precision(a) cout << fixed << setprecision(a)
#define     deb(a)     cout<<__LINE__<<" # "<<#a<<" -> "<<a<<endl;
#define     FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define     test       int t;cin>>t;while(t--)
///-------------------Function---------------------///
bool is_vowel_up(char c)  {return c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O' || c == 'Y';}
bool is_vowel_low(char c) {return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';}
inline ll Strtoint(string str) {stringstream ss(str); ll x = 0; ss >> x ; return x ;}
inline string inttostr(ll x) {stringstream ss; ss << x; string str = ss.str(); return str;}
template <typename T> T gcd(T a,T b) { if(a<0)return gcd(-a,b);if(b < 0)return gcd(a,-b);return (b == 0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) { if(a<0)return lcm(-a,b);if(b < 0)return lcm(a,-b);return a*(b/gcd(a,b));}
///-----------------Main code---------------------///
int main()
{
	FasterIO
    int n;
    cin>>n;
     int a[n],b[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
        int index[n+1];
        int left[n+1]={0};
        int right[n+1]={0};
     for(int i=0;i<n;i++)
     {
      cin>>b[i];
      index[b[i]]=i;
     }
     for(int i=0;i<n;i++)
     {
         int k=i-index[a[i]];
         if(k>0)
         {
             left[k]++;
             right[n-k]++;
 
         }
         else
         {
             right[abs(k)]++;
             left[n+k]++;
         }
     }
 
        int mx1=0,mx2=0;
       for(int i=0;i<n;i++)
        {
          mx1=max(mx1,left[i]);
        }
 
        for(int i=0;i<n;i++)
        {
            mx2=max(mx2,right[i]);
        }
       cout<<max(mx1,mx2)<<endl;
 
 
 
}